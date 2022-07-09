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

float raio;
	do {
	printf("Digite o valor\n");
	scanf ("%f", &raio);
	} while (raio <= 0);
		
	float kk = areaCirculo(raio);
	printf ("\nA area do circulo eh %.2f", kk);
		
		int n1, n2, n3;
	do {	
		printf("Digite tres valores \n");
		scanf ("%d %d %d", &n1, &n2, &n3);
		} while (n1 == n2 || n1 == n3 || n2 == n3 || n2 == n1 || n3 == n2 || n3 == n1);
		
	int xx = maior3(n1, n2, n3);
	printf("o maior dos 3 numeros eh %d\n", xx);
}