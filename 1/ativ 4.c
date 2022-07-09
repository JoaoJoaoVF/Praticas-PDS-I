#include <stdio.h>

void main () 
{
	float pesoO, pesoB, alturaO, alturaB;
	float imcO, imcB, pesoidealO, pesoidealB;
	alturaB = 1.84;
	pesoB = 122;
	alturaO = 1.76;
	pesoO = 45;
	imcO = pesoO / (alturaO*alturaO);
	imcB = pesoB / (alturaB*alturaB);
	printf("IMC atual do Brutus: %.1f\n", imcB);
	printf("IMC atual da Olivia: %.1f\n", imcO);
	pesoidealO = 18.5 * alturaO * alturaO;
	pesoidealB = 24.9 * alturaB * alturaB;
	printf("Olivia precisa ganhar no minimo: %.1f\n", pesoidealO - pesoO);
	printf("Brutus precisa perder no minimo: %.1f\n", pesoB - pesoidealB);

}