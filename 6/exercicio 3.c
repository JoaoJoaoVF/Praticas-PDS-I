#include <stdio.h>

void main ()
{
	int n, acum = 1;
	printf("Digite o valor da linha\n");
	scanf("%d", &n);

	printf("A %d linha eh ", n);
	int inicial = (((n - 1) * n) / 2) + 1;
	for (int j = 1; j <= n; j++)
	{
		printf("%d ", inicial);
		inicial++;
	}
	printf("\n");

	printf("Triangulo Completo\n");
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d ", acum);
			acum++;
		}
		printf("\n");
	}
}