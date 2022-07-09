#include <stdio.h>

void main ()
{
	char string[128];
	char letra;
	int i = 0, j, m;
	printf("digite uma linha:\n");
	do
	{
		scanf("%c", &letra);
		if (letra >= 97 && letra <= 122)
		{
			letra = letra - 32;
		}
		string[i] = letra;
		i++;
	} while (letra != '\0' && letra != '\n');
	j = i - 2;
	m = j / 2;
	i = 0;
	while (j >= m)
	{
		if (string[j] != string [i])
		{
			printf("Nao eh um paralindromo");
			break;
		}
		j--;
		i++;
	}
}