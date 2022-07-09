#include <stdio.h>
#include "pratica4.h"

void main()
{
	int x, y, z, operacao;
		printf("\nDigite 3 valores \n");
		scanf ("%d %d %d", &x, &y, &z);
		
		printf("\nDigite o numero da operacao desejada \n1 = media geometrica \n2 = media ponderada \n3 = media harmonica \n4 = media aritimetica \n");
		scanf ("%d", &operacao);
		
	calculaMedia(x, y, z, operacao);
	printf("\no resultado foi de %.2f\n", calculaMedia(x, y, z, operacao));
}