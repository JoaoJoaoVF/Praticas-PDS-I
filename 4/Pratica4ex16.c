#include <stdio.h>
#include "pratica4.h"

void main (){

	int x, y;
	do {
		printf("Digite dois valores\n");
		scanf ("%d", &x, &y);
	} while (x < 1 || y < 1);

	int vv = mdc(x, y);
	int jj = mmc(x, y);
	printf("\nO MDC entre %d e %d sera %d \n O MMC entre %d e %d sera %d\n", x, y, vv, x, y, jj);
}