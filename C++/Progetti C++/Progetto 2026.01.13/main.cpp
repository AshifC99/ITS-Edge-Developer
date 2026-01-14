#include <iostream>
#include <fstream>

using namespace std;

const float PIGRECO = 3.14;

float raggio();

float circonferenza(float);
/*
float superficie(float);
float volume(float);
void stampaFile(float, float, float, float);
*/

int main()
{
    float r, c, s, v;
    r = raggio();
    c = circonferenza(r);

    cout << "Raggio: " << r << endl;

    return 0;
}

float raggio()
{
    float m;
    ifstream in("C:\\Users\\AshifChowdhury\\Documents\\1- Appunti ITS Ashif\\Local\\C++\\Progetti C++\\Progetto 2026.01.13\\input.txt");
    in >> m;
    return m;
}

float circonferenza(float n)
{
    float z = 2 * PIGRECO * n;

    return z;
}