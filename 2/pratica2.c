#include <stdio.h>
#include <math.h>

#define pi 3.14159

	float Cauchy (float x)
{
		return 1 / (pi * ( 1 + pow(x, 2)));
}

	float Gumbel (float x, float mi, float beta) 
{
	float z = (x - mi) / beta;
	return (1 / beta) * exp(-(z + exp (-z)));
}

	float Laplace (float x, float mi, float b)
{
	return (1 / (2 * b)) * exp((-fabs(x - mi)/b));

}

	void main()
{
	printf("Cauchy f(-2) = %f\n", Cauchy(-2));
	printf("Gumbel f(0, 0.5, 2) = %f\n", Gumbel(0, 0.5, 2));
	printf("Laplace f(-6, -5, 4) = %f\n", Laplace(-6, -5, 4));
}
