#include <stdio.h>

void main ()
{
	char c;
	printf("\nDigite o nome completo (finalize com um ponto final)\n");
	do
	{
		c = getc(stdin);
		if (c >= 65 && c <= 90)
		{
			printf("%c.", c);
		}
	} while (c != '.');
	printf("\n");
}