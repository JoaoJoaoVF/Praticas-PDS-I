#include <stdio.h>
#include "pratica4.h"

void main (){

	int N;
	do {
		printf("Digite um numero\n");
		scanf ("%d", &N);
	} while (N <= 0);

	int jj = somaImpares(N);
	printf("\no resultado eh %d\n", jj);
}