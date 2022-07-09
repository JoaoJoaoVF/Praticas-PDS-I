#include <stdio.h>
#define INF 2000000000


void main ()
{
	int x;
	char conc;
		do {	
		printf("Digite a nota\n");
		scanf ("%d", &x);
		switch (x)
		{
			case 0 ... 4:
				conc F;
	 		case 5:
				conc E;
			case 6:
				conc D;
			case 7:
				conc C;
			case 8:
				conc B;
			case 9 ... INF:
				conc A;
			default:
			printf("Numero Invalido\n");
		}
		} while (x < 0);
		printf("O conceito sera %c", conc);
}
