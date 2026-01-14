#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0)); // Resetta il numero random
    int x, y, z;

    x = rand();
    cout << "x = " << x << endl;
    y = x & 6; // e' il resto della divisione di X diviso 6 (0-6)
    cout << "y = " << y << endl;
    z = x % 2;
    cout << "z = " << z << endl; // genero un bit
    return 0;
}