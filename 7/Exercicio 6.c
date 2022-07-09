#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 60

void main ()
{
	int X[TAM_MAX], Y[TAM_MAX], U[2*TAM_MAX];
	int tam_atual = 0, achei = 0;
	int numero;
	for (int i = 0; i < TAM_MAX; ++i)
	{
		do
		{
			X[i] = rand();
		} while (X [i] < 0 || X [i] > 365);
		do
		{
			Y[i] = rand();
		} while (Y [i] < 0 || Y [i] > 365);	
	}
	for (int i = 0; i < TAM_MAX; ++i)
	{
		numero = X[i];
		achei = 0;
		for (int j = 0; j < tam_atual; ++j)
		{
			if(numero == U[j])
			{
				achei = 1;
				break;
			}
		}
		if(!achei)
		{
			U[tam_atual] = numero;
			tam_atual++;
		}
		numero = Y[i];
		achei = 0;
		for (int j = 0; j < tam_atual; ++j)
		{
			if(numero == U[j])
			{
				achei = 1;
				break;
			}
		}
		if(!achei)
		{
			U[tam_atual] = numero;
			tam_atual++;
		}
	}
	printf("\nVetor Uniao\n");
	for (int i = 0; i < tam_atual; ++i)
	{
		printf("U[%d] = %d\n", i, U[i]);
	}
}