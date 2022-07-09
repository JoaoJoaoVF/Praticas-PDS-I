#include <stdio.h>
#include "pratica4.h"

void main()
{
	int N;
	do {
		printf("Digite um numero\n");
		scanf ("%d", &N);
		} while (N <= 1);
	
	int jj = enesimoFibonacci(N);
	printf("O %d numero eh %d", N, jj);

}