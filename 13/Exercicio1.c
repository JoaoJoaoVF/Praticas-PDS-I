#include <stdio.h>
#include <stdlib.h>

void imprimeMatriz(float **M, int n)
{
    int i = 0, j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%.2f ", (M)[i][j]);
        }
        printf("\n");
    }
}
void main()
{
    float **M = NULL;
    int n;
    int i = 0, j = 0;

    scanf("%d", &n);

    M = (float **)malloc(n * sizeof(float));

    //*M = (float *)malloc(n * sizeof(float));

    for (int i = 0; i < n; i++)
    {
        M[i] = (float *)malloc(n * sizeof(float));
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            M[i][j] = 0.0;
        }
        //printf("\n");
    }
    imprimeMatriz(M, n);

    for (int i = 0; i < n; i++)
    {
        free(M[i]);
    }
    free(M);
}