#include <stdio.h>
#include <stdlib.h>

#define TAM_DADO 6

// EXCERCICIO 1
typedef struct Guerreiro
{
    int ataque;
    int defesa;
    int carisma;
    int pontos_vida;
    int id_guerreiro;
} Guerreiro;

// EXCERCICIO 2
int rolaDados()
{
    int c = 0, d = 0, e = 0, f = 0;

    c = 1 + rand() % TAM_DADO;
    d = 1 + rand() % TAM_DADO;
    e = 1 + rand() % TAM_DADO;

    f = c + d + e;
    return f;
}

// EXCERCICIO 3
void criaGuerreiro(Guerreiro *j)
{
    j->ataque = rolaDados();
    j->defesa = rolaDados();
    j->carisma = rolaDados();
    j->pontos_vida = rolaDados() + rolaDados() + rolaDados();
}

// EXCERCICIO 4
int bonusCarisma(int carisma)
{
    int bonusganho = 0;
    if (carisma == 18)
    {
        bonusganho = 3;
    }
    else if (carisma == 17 || carisma == 16)
    {
        bonusganho = 2;
    }
    else if (carisma == 15 || carisma == 14)
    {
        bonusganho = 1;
    }
    else if (carisma == 7 || carisma == 6)
    {
        bonusganho = -1;
    }
    else if (carisma == 5 || carisma == 4)
    {
        bonusganho = -2;
    }
    else if (carisma == 3)
    {
        bonusganho = -3;
    }
    return bonusganho;
}

// EXCERCICIO 5
void ataca(Guerreiro *a, Guerreiro *b)
{
    int golpe, escudo, dano;
    golpe = rolaDados() + a->ataque + bonusCarisma(a->carisma);
    escudo = rolaDados() + b->defesa + bonusCarisma(b->carisma);
    dano = golpe - escudo;
    if (dano > 0)
        b->pontos_vida -= dano;
}

// EXCERCICIO 6
void jogo()
{
    Guerreiro x, y;
    Guerreiro *aux, *at, *def;
    criaGuerreiro(&x);
    criaGuerreiro(&y);
    at = &x;
    def = &y;
    at->id_guerreiro = 1;
    def->id_guerreiro = 2;
    while (1)
    {
        ataca(at, def);
        if (def->pontos_vida < 1)
            break;
        aux = at;
        at = def;
        def = aux;
    }
    printf("\nVencedor %d", at->id_guerreiro);
    printf("\nPontos de vida restantes: %d", at->pontos_vida);
}