#include <stdio.h>
#include "pratica4.h"

void main (){

	int n;
	do {
		printf("Digite um valor\n");
		scanf ("%d", &n);
	} while (n <= 0);

	int jj = ehDivisivelPor3ou5(n);
	printf("%d\n", jj);
}