#include <stdio.h>

enum diasSemana
{
    segunda,
    terca,
    quarta,
    quinta,
    sexta,
    sabado,
    domingo
};

int main()
{

    enum diasSemana dia1, dia2;

    dia1 = segunda; // acesso tanto por nome
    dia2 = 0;       // quanto por valor

    if (dia1 == dia2)
    {
        printf("Os dias sao iguais\n");
    }
    else
    {
        printf("Os dias sao diferentes\n");
    }

    return 0;
}