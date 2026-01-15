#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

// int V[]{3, -3, 2, 0, 1, -4};
// int Y[]{-4, 1, 0, 2, -3, 3};

void invertiVettore(int, int[], int[]);

int main()
{
}

void invertiVettore(int dim, int V[], int Y[])
{
    for (int i = 0; i < dim; i++)
    {
        Y[i] = V[dim - 1 - i];
    }
}