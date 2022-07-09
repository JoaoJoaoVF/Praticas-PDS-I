#include <stdio.h>
#include "pratica4.h"

void main (){

	int N;
	do {
		printf("Digite um valor\n");
		scanf ("%d", &N);
	} while (N <= 0);

	int jj = somaNumerosDiv3ou5(N);
	printf("a soma foi de %d\n", jj);
}