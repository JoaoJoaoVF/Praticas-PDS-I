#include <stdio.h>
#include "pratica4.h"

	

void main () {
	int n;
	do {
		printf("Digite o numero\n");
		scanf ("%d", &n);
		} while (n <= 1);
	  
		int jj = ehPar (n);
		printf("%d\n", jj);
}