#include <stdio.h>

int main()
{
    int n; // Declarando uma variavel

    int* p; // Declarando um ponteiro

    printf("infore um numero: ");
    scanf("%d", &n);

    // Atribuindo o endereco da variavel n ao ponteiro
    p = &n;

    printf("O numero informado foi %d\n", n);

    printf("Endereco de memoria: %d\n", &n);

    printf("Endereco do ponteiro: %d\n", p);
    return 0;
}