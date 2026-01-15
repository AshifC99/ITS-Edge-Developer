#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int dimensione();

void caricaVettore(int, int[]);       // dimensione e vettore
void stampaSchermo(int, int[]);       // dimensione e vettore
void copiaVettore(int, int[], int[]); // dimensione, vettore sorgente, vettore destinazione
void invertiVettore(int, int[], int[]);

int main()
{
    srand(time(0));

    int n; // dimensione del vettore
    n = dimensione();
    cout << "Dimensione: " << n << endl;

    int v[n];
    caricaVettore(n, v);
    stampaSchermo(n, v);

    int y[n];
    copiaVettore(n, v, y);
    stampaSchermo(n, y);

    invertiVettore(n, v, y);
    stampaSchermo(n, y);

    return 0;
}

int dimensione()
{
    return rand() % 5 + 6; // restituisce un numero casuale tra 6 e 10
}

void caricaVettore(int m, int w[])
{
    for (int i = 0; i < m; i++)
    {
        w[i] = rand() % 11 - 5; // numeri casuali tra -5 e +5
    }
}

void stampaSchermo(int q, int z[])
{
    for (int i = 0; i < q; i++)
    {
        cout << z[i] << "\t";
    }
    cout << endl;
}

void copiaVettore(int r, int s[], int t[])
{
    for (int i = 0; i < r; i++)
    {
        t[i] = s[i];
    }
}

void invertiVettore(int a, int b[], int c[])
{
    for (int i = 0; i < a; i++)
    {
        c[i] = b[a - 1 - i];
    }
}