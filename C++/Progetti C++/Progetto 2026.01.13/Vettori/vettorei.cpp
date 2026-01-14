#include <iostream>
using namespace std;

int main()
{
    int v[] = {5, -3, 2, 0, 1, -1, -5};
    int dim, somma = 0, num;

    dim = sizeof(v) / sizeof(v[0]);

    cout << "Dimensione del vettore: " << dim << endl;

    cout << "Elemento 1 vettore: " << v[0] << endl;

    for (int i = 0; i < dim; i++)
    {
        // cout << v[i] << "\t";
        // cout << endl;

        cout << v[i] << "\t";
        somma = somma + v[i]; // somma+=v[i];

        cout << "Somma elementi vettore: " << somma << endl;
    }
}