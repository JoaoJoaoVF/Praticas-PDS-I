#include <stdio.h>

void  main()
{
	char normal[128];
	char inverso[128];
	char c;
	int i = 0, j;
	printf("\nDigite o texto (finalize com um ponto final)\n");
	do
	{
		c = getc(stdin);
		normal[i] = c;
		i++;
	} while (c != '.');
	j = i - 1;
	inverso[i] = '\0';
	i = 0;
	while (j >= 0)
	{
		inverso[j] = normal[i];
		j--;
		i++;
	}
	printf("A saide foi %s\n", inverso);
}