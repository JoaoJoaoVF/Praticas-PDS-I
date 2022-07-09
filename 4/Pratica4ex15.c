#include <stdio.h>
#include "pratica4.h"

void main () {

	unsigned int x, y;
	printf("Digite dois valores \n");
	scanf ("%d %d", &x, &y);

	int jj = mmc(x, y);
	printf("o resultado eh %d\n", jj);
}