#include <stdio.h>
#include <math.h>

//Exercicio 1.a

    float parteInteira (float x)
{
    return (int) x;
}

//Exercicio 1.b

    float parteFracionaria (float x)
{
    return x - (int) x;
}

//Exercicio 1.c

    float divInts (int x, int y)
{
    return (float) x / (float) y; 
}

//Exercicio 2

    void soma1 (int *ponteiro)
{
     (*ponteiro)++;   
}

//Exercicio 4

    float troca (float *end_valor1, float *end_valor2)
{
    int x, y;
    x = *end_valor1;
    y = *end_valor1;
    *end_valor1 = x;
    *end_valor2 = y;
}

//Exercicio 5

   unsigned long long fast_pow_2 (int expoente)
{
    return (unsigned long long int) 1 << expoente;  
}

//Exercicio 6.a

    int ddd (unsigned int number)
{
    return number / pow (10, 8);
}

//Exercicio 6.b

    int soma1SePar (unsigned int number)
{
    return number | (unsigned int) 1;
}

//Exercicio 6.c

    int parOuImpar (unsigned int number)
{
    return ! (number & (unsigned int) 1);
}