/*
	Esercizio 1: Dati i 2 lati di un rettangolo
	b=3, h=4, trovare l'area e il perimetro.
	Nota: si possono usare variabili int
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float b = 3;
	float h = 4;
	int area = b * h;
	int perimetro = 2 * (b + h);
	cout << "L'area del rettangolo e': " << area << endl;
	cout << "Il perimetro del rettangolo e': " << perimetro << endl;
	return 0;
}
