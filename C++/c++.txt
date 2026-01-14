#include <iostream>
#include <windows.h>
#include <cctype>
using namespace std;

int main()
{
	char Voto;

	cout << "Inserisci il voto (A, B, C, D, F): ";
	cin >> Voto;
	Voto = toupper(Voto);

	switch (Voto)
	{
	case 'A':
		cout << "10" << endl;
		break;
	case 'B':
		cout << "8" << endl;
		break;
	case 'C':
		cout << "7" << endl;
		break;
	case 'D':
		cout << "6" << endl;
		break;
	case 'F':
		cout << "5" << endl;
		break;

	default:
		cout << "Carattere non valido" << endl;
		break;
	}
	return 0;
}



// Per eseguire il programma: CTRL+F5 oppure Debug > Avvia senza eseguire debug
// Per eseguire il debug del programma: F5 oppure Debug > Avvia debug

// Suggerimenti per iniziare: 
//   1. Usare la finestra Esplora soluzioni per aggiungere/gestire i file
//   2. Usare la finestra Team Explorer per connettersi al controllo del codice sorgente
//   3. Usare la finestra di output per visualizzare l'output di compilazione e altri messaggi
//   4. Usare la finestra Elenco errori per visualizzare gli errori
//   5. Passare a Progetto > Aggiungi nuovo elemento per creare nuovi file di codice oppure a Progetto > Aggiungi elemento esistente per aggiungere file di codice esistenti al progetto
//   6. Per aprire di nuovo questo progetto in futuro, passare a File > Apri > Progetto e selezionare il file con estensione sln
