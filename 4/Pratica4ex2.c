#include <stdio.h>
#include "pratica4.h"


void main () {
	float raio;
	do {
	printf("Digite o valor\n");
	scanf ("%f", &raio);
	} while (raio <= 0);
		
	float jj = areaCirculo(raio);
	printf ("\nA area do circulo eh %.2f", jj);
		
}