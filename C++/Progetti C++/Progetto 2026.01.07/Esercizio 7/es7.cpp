/* Esercitazione 7 - n.1:
Realizzare un algoritmo che richieda un numero n intero,
con n numero a caso tra 10 e 15 e stampi tutti i pari da 0 a n se n è pari da 0 a n-1 se n è
dispari.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;

    // Generazione numero casuale tra 10 e 15
    n = rand() % 6 + 10; // rand() % (max - min + 1) + min

    cout << "Numero generato: " << n << endl;
    cout << "Numeri pari: " << endl;

    // Stampa numeri pari
    for (int i = 0; i < n; i += 2)
    {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}