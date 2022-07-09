#include "selectionsort.h"

#define MAX 10000000
#define TAM_MAX 6

void troca(int v[], int i, int j)
{
    int aux;
    aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}

void ordenar(int x[], int n)
{
    int menor, depois;
    int i, k = 0;
    while (k < n)
    {
        menor = MAX;
        for (i = k; i < n; i++)
        {
            if (x[i] < menor)
            {
                menor = x[i];
                depois = i;
            }
        }
        troca(x, k, depois);
        k++;
    }
}