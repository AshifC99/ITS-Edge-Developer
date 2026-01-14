#include <iostream>
#include <fstream>
using namespace std;

float lato();                          // Prototipo della funzione lato
float perimetro(float);                // Prototipo della funzione perimetro
float area(float);                     // Variabile per l'area
void stampaVideo(float, float, float); // Prototipo della funzione stampaVideo
void stampaFile(float, float, float);  // Prototipo della funzione stampaFile

int main()
{
    float latoQuadrato, perimetroQuadrato, areaQuadrato; // Variabili principali
    latoQuadrato = lato();                               // Chiamata alla funzione lato
    perimetroQuadrato = perimetro(latoQuadrato);         // Calcolo del perimetro
    areaQuadrato = area(latoQuadrato);                   // Calcolo dell'area

    stampaVideo(latoQuadrato, perimetroQuadrato, areaQuadrato); // Stampa a video
    stampaFile(latoQuadrato, perimetroQuadrato, areaQuadrato);  // Stampa su file

    return 0;
}

// Funzione per l'inserimento del lato
float lato()
{
    float latoInput;
    cout << "Inserisci il lato del quadrato: ";
    cin >> latoInput;
    return latoInput;
}

// Funzione per il calcolo del perimetro
float perimetro(float a)
{
    float perimetroQ = 4 * a;

    return perimetroQ;
}

// Funzione per il calcolo dell'area
float area(float b)
{
    float areaQ = b * b;

    return areaQ;
}

// Funzione per la stampa a video
void stampaVideo(float lato, float perimetro, float area)
{
    cout << "Lato del quadrato: " << lato << endl;
    cout << "Perimetro del quadrato: " << perimetro << endl;
    cout << "Area del quadrato: " << area << endl;
}

// Funzione per la stampa su file
void stampaFile(float lato, float perimetro, float area)
{
    ofstream fileOutput("quadrato.txt");

    if (fileOutput.is_open())
    {
        fileOutput << "Lato del quadrato: " << lato << endl;
        fileOutput << "Perimetro del quadrato: " << perimetro << endl;
        fileOutput << "Area del quadrato: " << area << endl;
        fileOutput.close();
    }
    else
    {
        cout << "Impossibile aprire il file per la scrittura." << endl;
    }
}