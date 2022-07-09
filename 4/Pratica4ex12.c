#include <stdio.h>
#include "pratica4.h"

void main (){

	int N;
	do {
		printf("Digite um valor\n");
		scanf ("%d", &N);
	} while (N <= 0);
	int jj = numeroDivisores(N);
	printf("Os divisores de %d sao %d\n", N, jj);
}