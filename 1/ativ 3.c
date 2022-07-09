#include <stdio.h>

void main()
{

	float poupanca;
	float juros = 1.0056;

	// 1 mes
	poupanca = 789.54;
	poupanca *= juros;

	// 2 mes 
	poupanca += 303.20;
	poupanca *= juros;

	// 3 mes 
	poupanca -= 58.25;
	poupanca *= juros;

	// 4 mes 

	printf ("\nAo final do quarto mes, voce possui %.2f em sua conta", poupanca);

}
