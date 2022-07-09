#include <stdio.h>
#include "pratica4.h"

void main (){

	int N;
	do {
		printf("Digite um valor\n");
		scanf ("%d", &N);
	} while (N <= 0);

	double jj = fatorial(N);
	printf("esse resultado sera %5.5lf \n", jj);
}