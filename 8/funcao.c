#include <stdio.h>
#include "funcao.h"

void imprimeMatriz(int M[][TAM_MAX], int m, int n)
{
	printf("\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%2d ", M[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void sobe_zeros(int M[][TAM_MAX], int m, int n)
{
	int aux;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (M[i][j] == 0)
			{
				for (int x = i - 1; x >= 0; x--)
				{
					aux = M[x][j];
					if (aux == 0)
						break;
					else
					{
						M[x][j] = M[x + 1][j];
						M[x + 1][j] = aux;
					}
				}
			}
		}
	}
}

int consecutivos(int M[][TAM_MAX], int m, int n)
{
	int M_l[TAM_MAX][TAM_MAX], M_c[TAM_MAX][TAM_MAX];
	int con, ant;
	int zero = 0;
	for (int i = 0; i < m; ++i)
	{
		con = 0;
		ant = -1;
		for (int j = 0; j < n; ++j)
		{
			M_l[i][j] = M[i][j];
			if (j != n - 1)
			{
				if (M_l[i][j] != ant)
				{
					if (con >= 3)
						for (int x = con; x > 0; x--)
							M_l[i][j - x] = 0;
					con = 1;
				}
				else
					con++;
			}
			else
			{
				if (M_l[i][j] != ant)
				{
					if (con >= 3)
					{
						for (int x = con; x > 0; x--)
						{
							M_l[i][j - x] = 0;
						}
					}
				}
				else if (con >= 2)
				{
					for (int x = con; x >= 0; x--)
					{
						M_l[i][j - x] = 0;
					}
				}
			}
			ant = M[i][j];
		}
	}

	for (int j = 0; j < n; j++)
	{
		con = 0;
		ant = -1;
		for (int i = 0; i < m; i++)
		{
			M_c[i][j] = M[i][j];
			if (i != m - 1)
			{
				if (M_c[i][j] != ant)
				{
					if (con >= 3)
					{
						for (int x = con; x > 0; x--)
						{
							M_c[i - x][j] = 0;
						}
						con = 1;
					}
				}
				else
					con++;
			}
			else
			{
				if (M_c[i][j] != ant)
				{
					if (con >= 3)
					{
						for (int x = con; x > 0; x--)
						{
							M_c[i - x][j] = 0;
						}
					}
				}
				else if (con >= 2)
				{
					for (int x = con; x >= 0; x--)
					{
						M_c[i - x][j] = 0;
					}
				}
			}
			ant = M[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (M_l[i][j] == 0 || M_c[i][j] == 0)
			{
				M[i][j] = 0;
				zero++;
			}
		}
	}
	return zero;
}