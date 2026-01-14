#include <iostream>

using namespace std;

int main()
{

    int x, n, posMax, posMin, max, min, i = 1;

    cout << "Quanti numeri mi darai?: ";
    cin >> n;

    if (n > 0)
    {

        while (n >= i)
        {

            cout << "Numero?" << endl;
            cin >> x;

            if (i == 1)
            {
                max = x;
                min = x;
                posMax = 1;
                posMin = 1;
            }

            if (x >= max)
            {
                max = x;
                posMax = i;
            }

            if (x <= min)
            {
                min = x;
                posMin = i;
            }

            i++;
        }

        cout << "Max= " << max << " - Posizione" << posMax << endl;
        cout << "Min= " << min << " - Posizione" << posMin << endl;
    }

    else
    {
        cout << "'n' non valida" << endl;
    }
}