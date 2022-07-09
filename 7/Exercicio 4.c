#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 10
#define TAM_MAXX 20


void main ()
{
	int X[TAM_MAX], Y[TAM_MAX], Z[TAM_MAXX];
	int ValorX = 0, ValorY = 0;
	printf ("Digite todos os 10 valores de X:\n");
	for (int i = 0; i < 10; ++i)
	{
		scanf ("%d", &X[i]);
	}
	printf ("Digite todos os 10 valores de Y:\n");
	for (int i = 0; i < 10; ++i)
	{
		scanf ("%d", &Y[i]);
	}
		for (int i = 0; i < 20; ++i)
	{
		if (i % 2 == 0)
		{
			Z[i] = X[ValorX];
			ValorX++;
		}
		else
		{
			Z[i] = Y[ValorY];
			ValorY++;
		}
	}
	for (int i = 0; i < 20; ++i)
	{
		printf("Z[%d] = %d\n", i, Z[i]);
	}
}