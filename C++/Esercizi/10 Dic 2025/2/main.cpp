#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // Inizializza il seed per la generazione casuale
    srand(time(0));

    // Genera due numeri casuali tra -1 e 1
    int num1 = rand() % 3 - 1; // Genera -1, 0 o 1
    int num2 = rand() % 3 - 1; // Genera -1, 0 o 1

    cout << "Numero 1: " << num1 << endl;
    cout << "Numero 2: " << num2 << endl;
    cout << endl;

    // Confronta i numeri
    if (num1 > num2)
    {
        cout << "Il numero maggiore è: " << num1 << endl;
    }
    else if (num2 > num1)
    {
        cout << "Il numero maggiore è: " << num2 << endl;
    }
    else
    {
        cout << "I numeri sono uguali: " << num1 << endl;
    }

    return 0;
}
