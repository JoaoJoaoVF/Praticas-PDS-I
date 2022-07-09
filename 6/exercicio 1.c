#include <stdio.h>
#include <math.h>
#define delta pow(10, -6)

double fatorial (int N)
{
	double fat = 1;
	for (int i = 2; i <= N; i++)
		fat *= i;
	return fat;
}

void main ()
{
	double x = 1;
	double y = x;
	for (int i = 1; x > delta; i++)
		{
			x = 1.0 / fatorial(i);
			y += x;
		}
	printf("O numero de Euler sera %lf\n", y);	
}