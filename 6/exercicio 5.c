#include <stdio.h>

void main ()
{
	char string[128];
	char letra;
	int i = 0;
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
	printf ("Linha em maisculo sera: %s", string);
}