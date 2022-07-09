#include <stdio.h>
#define TAM_MAX 1000

void main ()
{
	int fib;
	double seq[TAM_MAX];
	seq[0] = 1;
	seq[1] = 1;
	do
	{
		printf("\nDigite um valor de x\n");
		scanf("%d", &fib);
		if (fib >= 0 && fib <= TAM_MAX)
		{
			for (int i = 2; i <= fib; i++)
			{
				seq[i] = seq[i-1] + seq[i-2];
			}
			printf ("\nO resultado foi dessa sequencia de Fibonacci (%d) foi %4.3e\n", fib, seq[fib]);
		}
		else
		{
			printf("Fim da execucao.\n");
		}
	} while (fib >= 0 && fib <= TAM_MAX);
}