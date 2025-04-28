#include <stdio.h>

// uso de ponteiros para direcionar o valor "contaor" para a função incrementa, pra que em ações posteriores ele esteja com o valor que foi incrementado anteriormente.

void incrementa(int *valor)
{
    printf("Antes de incrementar:");
    printf("O contador vale: %d\n", (*valor));

    printf("Depois de incrementar:");
    printf("O contador vale: %d\n", ++(*valor));
}

int main()
{
    int contador = 10;

    printf("Antes de incrementar: ");
    printf("O contador vale: %d\n*", contador);
    printf("O endereco de memoria do contador vale: %d\n", &contador);
    // copia por valor
    // incrementa(contador);
    // contador real
    incrementa(&contador);

    printf("Depois de incrementar: ");
    printf("O contador vale: %d\n*", contador);
    return 0;
}