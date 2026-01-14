
// tutte le variabili che devo usare
var tabellone;
var utente;
var pc;
var effectsReady = false;

function D6() {
    // estraggo la mia percentuale
    var seed = Math.random();
    // lo zoommo sulle possibilità che ho
    var posizione = seed * 6;
    // tolgo i decimanli segnadoli
    posizione = parseInt(posizione);
    // sposto la mia serie 0->5 in 1->6
    posizione = posizione + 1;
    // restituisco all'utente il valore
    return posizione;
}

// Crea gli elementi per le animazioni (una sola volta)
function initEffects() {
    if (effectsReady) return;

    var fireworks = document.getElementById("fx-fireworks");
    var rain = document.getElementById("fx-rain");
    var colors = ["#ff5f6d", "#ffc371", "#7cf1ff", "#9b7bff", "#7dd957"];

    // Particelle dei fuochi d'artificio
    for (var i = 0; i < 18; i++) {
        var s = document.createElement("span");
        s.className = "spark";
        s.style.left = Math.random() * 100 + "%";
        s.style.bottom = 10 + Math.random() * 50 + "%";
        s.style.backgroundColor = colors[i % colors.length];
        s.style.animationDelay = (Math.random() * 0.6).toFixed(2) + "s";
        s.style.animationDuration = (1 + Math.random() * 0.6).toFixed(2) + "s";
        fireworks.appendChild(s);
    }

    // Gocce di pioggia (emoji tristi)
    for (var j = 0; j < 22; j++) {
        var d = document.createElement("span");
        d.className = "drop";
        d.textContent = "😢";
        d.style.left = Math.random() * 100 + "%";
        d.style.animationDelay = (-Math.random() * 1.5).toFixed(2) + "s";
        d.style.animationDuration = (1.6 + Math.random() * 0.9).toFixed(2) + "s";
        rain.appendChild(d);
    }

    effectsReady = true;
}

function showFireworks() {
    document.getElementById("fx-fireworks").classList.add("show");
    document.getElementById("fx-rain").classList.remove("show");
}

function showRain() {
    // forza il riavvio dell'animazione delle gocce
    resetRainAnimations();
    document.getElementById("fx-rain").classList.add("show");
    document.getElementById("fx-fireworks").classList.remove("show");
}

function clearEffects() {
    document.getElementById("fx-fireworks").classList.remove("show");
    document.getElementById("fx-rain").classList.remove("show");
}

// resetta le animazioni della pioggia per farle ripartire quando mostrate
function resetRainAnimations() {
    var drops = document.querySelectorAll('#fx-rain .drop');
    drops.forEach(function (d) {
        d.style.animation = 'none';
        // force reflow
        void d.offsetHeight;
        d.style.animation = '';
    });
}

function preparazione() {
    // posizioniamo le pedine
    utente = 0;
    pc = 0;

    initEffects();
    clearEffects();

    // ripulisce il messaggio di stato
    document.getElementById("messaggio").textContent = "";

    // e costruiamo le tabellone
    tabellone = [0, 0, 2, 0, 0, -4, 3, 0, -1, 0, 7, 0, -12, 1, 0, 2, -5, 0, 2, -19];
    console.log("--==INIZIO PARTITA==--");
    console.log("utente:\t " + utente);
    console.log("pc:\t " + pc);

    // Resetta la tabella dei risultati
    var tbody = document.getElementById("corpoTabella");
    tbody.innerHTML = "";

    // Aggiungi la riga iniziale
    var nuovaRiga = tbody.insertRow();
    var cellaUtente = nuovaRiga.insertCell(0);
    var cellaPc = nuovaRiga.insertCell(1);
    cellaUtente.align = "center";
    cellaPc.align = "center";
    cellaUtente.textContent = utente;
    cellaPc.textContent = pc;
}

function turno(pedina, percorso) {
    // lancio in dado
    var dado = D6();
    // muovo la pedina
    pedina = pedina + dado;
    // controllo il malus o bonus
    var modificatore = percorso[pedina];
    // sposto di nuovo la pedina
    return pedina + modificatore;
}

function turnoUtente() {
    utente = turno(utente, tabellone);

}

function turnoPc() {
    pc = turno(pc, tabellone);

}

function controllo() {
    var messaggio = document.getElementById("messaggio");

    if (isNaN(utente)) {
        console.log('--==!!!HAI VINTO!!!==--');
        messaggio.textContent = 'HAI VINTO! 😍';
        showFireworks();
    }
    else if (isNaN(pc)) {
        console.log('--==!?!HAI PERSO!?!==--');
        messaggio.textContent = 'HAI PERSO! 😭';
        showRain();
    }
    else {
        console.log("utente:\t " + utente);
        console.log("pc:\t " + pc);
        // nessun messaggio di fine partita mentre si gioca
        messaggio.textContent = '';
        clearEffects();
    }

    // Aggiungi una nuova riga alla tabella con i risultati del tiro
    var tbody = document.getElementById("corpoTabella");
    var nuovaRiga = tbody.insertRow();
    var cellaUtente = nuovaRiga.insertCell(0);
    var cellaPc = nuovaRiga.insertCell(1);
    cellaUtente.align = "center";
    cellaPc.align = "center";
    cellaUtente.textContent = utente;
    cellaPc.textContent = pc;
}

function Tiro() {
    turnoUtente();
    turnoPc();
    controllo();
}

preparazione();
