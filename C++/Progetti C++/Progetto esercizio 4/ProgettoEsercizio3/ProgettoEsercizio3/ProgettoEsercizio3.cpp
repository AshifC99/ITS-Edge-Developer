/*
Scrivere un algoritmo che data una circonferenza C=6.28 (il perimetro)
mi calcoli l’area A.
Nota: C=2πr A=πr^2 π=3.14 ; const float PIGRECO=3.14.
Nota: necessarie variabili float (o double).

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// Dati iniziali
	const float PIGRECO = 3.14;		// costante pi greco
	float C = 6.28;					// Perimetro circonferenza
	float r, A;						// r= raggio A= area
	r = C / (2 * PIGRECO);			// Calcolo raggio
	A = PIGRECO * pow(r, 2);		// Calcolo area

	// Stampa risultati
	cout << " Dati 𝑪 = " << C << endl;
	cout << " Raggio 𝑟 = " << r << endl;
	cout << " l'Area 𝐀 = " << A << endl;

	return 0;
}