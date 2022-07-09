#include <stdio.h>

void main ()
{
	char linha[128];
	printf("\ndigite uma linha: ");
	fgets(linha, 128, stdin);

	int t = 0;
	for (int i = 0; linha[i] != '\0' && linha[i] != '\n'; i++)
	{
		t++;
	}
	printf("A linha tem %d caracteres\n", t);
}