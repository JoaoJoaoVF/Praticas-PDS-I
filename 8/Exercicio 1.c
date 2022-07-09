#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"

#define TAM_MAX 100

void main()
{
	int M[TAM_MAX][TAM_MAX];
	int n = 0, m = 0, k = 0;
	int zero = 0, contazero = 0;
	do
	{
		printf("Digite o valor de linhas e colunas da matriz respectivamente\n");
		scanf("%d %d", &m, &n);
		if (m < 0 || m > TAM_MAX || n < 0 || n > TAM_MAX)
			printf("Dimensao invalida.\n");
	} while (m < 0 || m > TAM_MAX || n < 0 || n > TAM_MAX);

	do
	{
		printf("Digite o valor maximo de valores da matriz\n");
		scanf("%d", &k);
		if (k < 2)
			printf("Valor invalido\n");
	} while (k < 2);

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			do
			{
				M[i][j] = rand();
			} while (M[i][j] < 1 || M[i][j] > k);
		}
	}
	printf("\nMatriz preenchida\n");
	imprimeMatriz(M, m, n);

	while (1)
	{
		contazero = zero;
		zero = consecutivos(M, m, n);
		if (contazero == zero)
			break;
		sobe_zeros(M, m, n);
	}
	printf("\nMatriz final.\n");
	imprimeMatriz(M, m, n);
	printf("\nA matriz possui %d zeros\n", zero);
}