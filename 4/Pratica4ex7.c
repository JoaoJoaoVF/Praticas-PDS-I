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
	fflush (stdin);
	float peso;
	printf ("Digite o peso\n");
	scanf ("%f", &peso);
	
	
	float jj = pesoIdeal(h, sexo); 

	float fazer;
	if (peso <= jj){
	fazer = jj - peso;
	printf ("A pessoa deve ganhar %.2f kg", fazer);
} if (peso >= jj){
	fazer = peso - jj;
	printf ("A pessoa deve perder %.2f kg", fazer);
} 
}