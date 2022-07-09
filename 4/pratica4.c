#include <math.h>

//EXERCICIO 1
float paraMetrosPorSegundo (float v) {

	float x;
	x = v / 3.6;
	return x;

}
//EXERCICIO 2
float areaCirculo(float raio){

	float pi;
	pi = 3.141592;
	float res = pi * pow(raio, 2);
	return res;
}
//EXERCICIO 3

int maior3(int n1, int n2, int n3){
	
	if (n1 > n2 && n1 > n3){
		return n1;
	}
	if (n2 > n3 && n2 > n1){
		return n2;
	}
	if (n3 > n2 && n3 > n1){
		return n3;
	}
	}
//EXERCICIO 4
	int ehPar(int n){

	if (n % 2 == 0)
		return 1;
	
	else return 0;
}
//EXERCICIO 5
int ehDivisivelPor3ou5(int n){
	
	if (n % 3 == 0 && n % 5 == 0) {
	return 0;
	} if (n % 3 == 0 || n % 5 == 0){
		return 1;
	} else {
		return 0;
	}
}
//EXERCICIO 6
float pesoIdeal(float h, char sexo) {

	float PIM, PIF;
	if (sexo == 1){
		PIM = (72.7 * h) - 58;
		return PIM;
	} 
	if (sexo == 0){
		PIF = (62.1 * h) - 44.7;
		return PIF;
}
}
//EXERCICIO 8
int somaImpares(int N){

	int soma = 0;
	for (int i = 0; i <= N; i++)
		if(!ehPar(i))
			soma += i;
		return soma;
}
//EXERCICIO 9
double fatorial(int N){

	double total = 1;
	for (int i = 2; i <= N; i++)
	
		total *= i;
		return total;
}
//EXERCICIO 10
int somaNumerosDiv3ou5(int N)
{

	int soma = 0;
	for (int i = 0; i <= N; i++)
	{
		if (ehDivisivelPor3ou5(i))
			soma += 1;
		i++;
	}
		return soma;
}
//EXERCICIO 11

float calculaMedia(int x, int y, int z, int operacao){

	int j;
	float resultado;
	if (operacao == 1){
		j = x * y * z;
		resultado = pow (j, 0.3333);
		return resultado;
	}
	if (operacao == 2){
		resultado = ((x + 2) * (x + 3) * z) / 6.0;
		return resultado;
	}	
	if (operacao == 3){
		resultado = 3.0 / (1.0 / x + 1.0 / y + 1.0 / z);
		return resultado;
	}
	if (operacao == 4){
		resultado = (x + y + z) / 3.0;
		return resultado;
	}
	
}
//EXERCICIO 12

int numeroDivisores(int N)
{

	int div = 1;
	for (int i = 2; i <= N; i++)
	{
		if(N % i == 0){
			div++;
		}
	}
	return div;
}
//EXERCICIO 13

int enesimoFibonacci(int N){

	if (N == 1){
		return 0;
	} if (N == 2){
		return 1;
	} 
	int a = 0, b = 1, ene;
	for (int i = 3; i <= N; i++)
	{
		ene = a + b;
		a = b;
		b = ene;
	}
	return ene;
}
//EXERCICIO 14

int mdc(unsigned int x, unsigned int y)
{
	int menor, max;
	if (x < y)
		menor = x;
 	else
		menor = y;
	for (int i = 2; i <= menor; i++)
		if (x % i == 0 && y % i == 0)
			max = i;
				return max; 
}
//EXERCICIO 15
int mmc(unsigned int x, unsigned int y)
{
	int max, min;
	if (x < y)
		max = y;
 	else
		max = x;
	while (1)
	{
		if (max % x == 0 && max % y == 0)
			break;
		max++;
	}
				return max; 
}