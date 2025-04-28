#include <stdio.h>
#include <stdlib.h>

int main()
{

    div_t saida;

    saida = div(27, 4); // 27 dividido por 4
    printf("O resultado da divisao eh %d e o resto eh %d\n", saida.quot, saida.rem);

    return 0;
}