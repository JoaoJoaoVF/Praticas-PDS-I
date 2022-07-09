#include <stdio.h>
#include "pratica4.h"

void main (){
	int n1, n2, n3;
	do {	
		printf("Digite tres valores \n");
		scanf ("%d %d %d", &n1, &n2, &n3);
		} while (n1 == n2 || n1 == n3 || n2 == n3 || n2 == n1 || n3 == n2 || n3 == n1);
		
	int jj = maior3(n1, n2, n3);
	printf("o maior dos 3 numeros eh %d\n", jj);
	}