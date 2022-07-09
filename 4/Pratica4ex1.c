#include <stdio.h>
#include "pratica4.h"

void main () {

	float v;
	do {
	printf("Digite a velocidade em km/h \n");
	scanf ("%f", &v);
	}  while (v <= 0);
	
	float jj = paraMetrosPorSegundo(v);
	printf("O resultado da convercao sera %.3f m/s\n", jj);


}
