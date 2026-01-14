// dichiarare le variabili globali
// visibili globalmente
var nemici;
var campo;
var comunicazioni;
var naviAffondate;
var colpiSparati;
var colpiDisponibili;
var nemiciRimanenti;
var giocoFinito = false;

// icone da usare
var icona = "&#x1F30A;";
var iconaPiena = "&#x1F4A5;";
var iconaVuota = "🖕🏾";

// funzioni generali di gioco
function IniziaBattaglia(righe, colonne) {
    // caricare i nemici
    CaricaNemici(righe, colonne);
    // resettare i contatori e collegare il DOM (document object model)
    ResettaContatori(50);
    // creare le interfacce grafiche
    CostruisciCampo(righe, colonne);
}

function CaricaNemici(righe, colonne) {
    nemici = [];
    for (let y = 0; y < righe; y++) {
        let riga = [];
        for (let x = 0; x < colonne; x++) {
            riga[x] = parseInt(Math.random() * 2);
        }
        nemici[y] = riga;
    }
    return nemici;
}

function ResettaContatori(colpi) {
    campo = document.getElementById("battaglia");
    comunicazioni = document.getElementById("comunicazioni");
    naviAffondate = 0;
    colpiSparati = 0;
    colpiDisponibili = colpi;
    nemiciRimanenti = ContaNemici();
    giocoFinito = false;
    MostraStato("Hai a disposizione i colpi iniziali.");
}

function CostruisciCampo(righe, colonne) {
    // elimino eventuali campi precedenti
    campo.innerHTML = "";
    for (let y = 0; y < righe; y++) {
        // creo la riga
        let riga = document.createElement("tr");
        // la popolo
        for (let x = 0; x < colonne; x++) {
            // creo la cella
            let cella = document.createElement("td");
            // la valorizzo
            cella.innerHTML = icona;
            cella.dataset["x"] = x;
            cella.dataset["y"] = y;
            cella.className = "sea";
            cella.onclick = ClickSuCella;
            // e la aggiungo alla riga
            riga.appendChild(cella);
        }

        // appendo la riga come figlia della tabella
        campo.appendChild(riga);
    }
}

function ClickSuCella(evento) {
    if (giocoFinito) return;

    const cella = evento.currentTarget || evento.target;
    if (cella.dataset["shot"]) {
        MostraStato("Hai già sparato qui!");
        return;
    }

    const x = parseInt(cella.dataset["x"], 10);
    const y = parseInt(cella.dataset["y"], 10);

    // registra il colpo
    colpiSparati += 1;
    colpiDisponibili -= 1;
    cella.dataset["shot"] = "1";

    if (nemici[y][x] === 1) {
        cella.innerHTML = iconaPiena;
        cella.classList.remove("sea");
        cella.classList.add("hit");
        naviAffondate += 1;
        nemiciRimanenti -= 1;
        MostraStato("Colpito!");
    } else {
        cella.innerHTML = iconaVuota;
        cella.classList.remove("sea");
        cella.classList.add("miss");
        MostraStato("Acqua.");
    }

    // condizioni di fine partita
    if (nemiciRimanenti <= 0) {
        FineGioco(true);
        return;
    }
    if (colpiDisponibili <= 0) {
        FineGioco(false);
    }
}

// utilità
function ContaNemici() {
    let tot = 0;
    for (let y = 0; y < nemici.length; y++) {
        for (let x = 0; x < nemici[y].length; x++) {
            if (nemici[y][x] === 1) tot += 1;
        }
    }
    return tot;
}

function MostraStato(messaggio) {
    comunicazioni.innerHTML =
        messaggio +
        " — Colpi: <span class=\"colpi\">" + colpiDisponibili +
        "</span> — Nemici: <span class=\"nemici\">" + nemiciRimanenti + "</span>";
}

function FineGioco(vittoria) {
    giocoFinito = true;
    const esito = vittoria ?
        "<span class=\"esito-vittoria\">Hai vinto!</span>" :
        "<span class=\"esito-sconfitta\">Hai perso...</span>";
    MostraStato(esito);
    // disabilita ulteriori click
    const celle = campo.querySelectorAll("td");
    celle.forEach(c => (c.onclick = null));
}