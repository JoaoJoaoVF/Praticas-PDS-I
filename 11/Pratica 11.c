#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "selectionsort.h"

void main()
{
    int cartela_numero = 1;
    int cartela_analisada[6];
    int cartela_vencedora[6] = {6, 9, 22, 23, 48, 52};
    int cartela_lost[6] = {4, 8, 15, 16, 23, 42};

    FILE *arq, *arq2;
    arq = fopen("cartelas.txt", "r");
    arq2 = fopen("cartelasordenadas", "w");

    while (feof(arq) == 0)
    {
        int contagem;
        fprintf(arq2, "Ordenada: ");
        for (int i = 0; i < 6; i++)
        {
            fscanf(arq, "%d ", &cartela_analisada[i]);
        }
        ordenar(cartela_analisada, 6);
        for (int i = 0; i < 6; i++)
        {
            fprintf(arq2, "%d ", cartela_analisada[i]);
        }
        fprintf(arq2, "\n");
        for (contagem = 0; contagem < 6; contagem++)
        {
            if (cartela_analisada[contagem] != cartela_vencedora[contagem])
            {
                break;
            }
        }
        if (contagem == 6)
        {
            printf("\nA cartela %d venceu na loteria.", cartela_numero);
        }
        for (contagem = 0; contagem < 6; contagem++)
        {
            if (cartela_analisada[contagem] != cartela_lost[contagem])
            {
                break;
            }
        }
        if (contagem == 6)
        {
            printf("\nA cartela %d possui os mesmos numeros do seriado Lost.", cartela_numero);
        }
        cartela_numero++;
    }
    fclose(arq);
    fclose(arq2);
}