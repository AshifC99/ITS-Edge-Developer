/*
Esercizio 2: Scrivere un programma per calcolare,
L'AREA E IL PERIMETRO DI UN TRAPEZIO ISOSCELE.
Dati: baseMaggiore=18, baseMinore=10, altezza=3, lato=5.
Nota: necessarie variabili float (o double).
Nota: L'area del trapezio si puo' calcolare facendo
la somma delle basi x l'altezza il tutto diviso due.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// Dati iniziali
	float baseMaggiore = 18;
	float baseMinore = 10;
	float altezza = 3;
	float lato = 5;

	// Calcolo Area
	float area = (baseMaggiore + baseMinore) * altezza / 2;

	// Calcolo Perimetro
	float perimetro = (baseMaggiore + baseMinore) + 2 * lato;

	// Stampa risultati
	cout << "Area del trapezio isoscele: " << area << endl;
	cout << "Perimetro del trapezio isoscele: " << perimetro << endl;
	

	return 0;
}
