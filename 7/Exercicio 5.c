#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 1000

void main ()
{
	int X[TAM_MAX], Y[TAM_MAX];
	int n;
	do
	{
		printf ("Digite todos os valores de X: (MAXIMO EH 1000)\n");
		scanf ("%d", &n);
		if (n < 0 || n > TAM_MAX)
		{
			printf("Numero Invalido");
		}
	} while (n < 0 || n > TAM_MAX);
		printf ("Digite todos os valores de X: \n");
		for (int i = 0; i < n; ++i)
		{
			scanf ("%d", &X[i]);
		}
		for (int i = 0; i < n; ++i)
		{
			Y[i] = X[n - 1 - i];
		}
		for (int i = 0; i < n; ++i)
		{
			printf("Y[%d] = %d\n", i, Y[i]);
		}
}