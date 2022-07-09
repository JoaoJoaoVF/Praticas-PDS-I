#include <stdio.h>
#include "pratica4.h"

void main () {

	char sexo;
	float h;
	printf("Digite a altura\n");
	scanf ("%f", &h);
	fflush (stdin);
	do {
	printf("Digite o sexo (1 = M e 0 = F) \n");
	scanf ("%d", &sexo);
	} while (sexo != 0 && sexo != 1);

	float jj = pesoIdeal(h, sexo);
		printf("O peso deveria ser %.2f\n", jj);
}
