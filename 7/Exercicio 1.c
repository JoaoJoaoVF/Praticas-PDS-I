#include <stdio.h>
#define TAM_MAX 100


void main ()
{
	double u[TAM_MAX], v[TAM_MAX];
	double produto;
	unsigned int n;
	do
	{
		printf("\nDigite a dimensao dos vetores (OBS: Menor que 100)\n");
		scanf("%d", &n);
		if (n > TAM_MAX)
		{
			printf("\nErro! Digite novamente\n");
		}
	} while(n >TAM_MAX);

	printf("Digite os valores de u\n");
	for(int i = 0; i < n; i++)
	{
		scanf("%lf", &u[i]);
	}
	printf("Digite os valores de v\n");
	for(int i = 0; i < n; i++)
	{
		scanf("%lf", &v[i]);
	}
	for(int i = 0; i < n; i++)
	{
		produto += (u[i] * v[i]);
	}
	printf("O produto escalar entre u e v eh: %.2lf\n", produto);
}