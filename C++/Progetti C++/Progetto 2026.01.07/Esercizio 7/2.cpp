/* Esercitazione 7 - n.2:
Realizzare un algoritmo che richieda un numero n intero,
con n numero a caso tra 20 e 30 e
stampi tutti i dispari da n a 1 se n è dispari o pari da n-1 a 1 se n è pari.

*/

#include <iostream>
#include <fstream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main()
{
    int n;

    // Inizializzazione del generatore di numeri casuali
    srand(time(0));

    // Generazione numero casuale tra 20 e 30
    n = rand() % 11 + 20; // rand() % (max - min + 1) + min

    cout << "Numero generato: " << n << endl;
    cout << "Numeri ";

    // Stampa numeri dispari o pari in base alla parità di n
    if (n % 2 == 0)
    {
        ofstream outfile("output1.txt");
        cout << "pari: " << endl;
        outfile << "pari: " << endl;

        for (int i = n - 1; i >= 1; i -= 2)
        {
            cout << i << " ";
            outfile << i << " ";
        }
    }
    else
    {
        ofstream outfile("output2.txt");
        cout << "dispari: " << endl;
        outfile << "dispari: " << endl;

        for (int i = n; i >= 1; i -= 2)
        {
            cout << i << " ";
            outfile << i << " ";
        }
    }

    cout << endl;
    return 0;
}