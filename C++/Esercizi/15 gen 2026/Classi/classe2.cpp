#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

class Quadrato
{
public:         // da qui gli Attributi
    float lato; // Attributo (variabile)

public:        // da qui i Metodi che sono le Funzioni
    Quadrato() // metodo costruttore con lo stesso nome della classe.
    {
        lato = 0.0; // restituisce nulla ma ha lo scopo di inizializzare gli attributi
    }

    void assegna(float x)
    {
        lato = x;
    }

    float perimetro()
    {
        return 4 * lato;
    }

    float area()
    {
        return lato * lato;
    }

    float diagonale()
    {
        return lato * sqrt(2);
    }

    float volumeCubo()
    {
        return lato * lato * lato; // oppure pow(lato,3);
    }
};

int main()
{
    Quadrato dipinto;
    float b; // variabile che raoporesenta il lato del dipinto
    cout << "Lato del dipinto: ";
    cin >> b;

    dipinto.assegna(b);

    cout << "Perimetro del dipinto: " << dipinto.perimetro() << endl;
    cout << "Area del dipinto: " << dipinto.area() << endl;
    cout << "Diagonale del dipinto: " << dipinto.diagonale() << endl;
    cout << "Volume del cubo con lato uguale al dipinto: " << dipinto.volumeCubo() << endl;

    cout << "Oggetto Tavolino" << endl;

    return 0;
}