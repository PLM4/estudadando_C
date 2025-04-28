#include <stdio.h>

int main()
{

    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("O endereco de memoria de %d eh %p e o de %d eh %p\n", num1, &num1, num2, &num2);

    if (&num1 > &num2)
    {
        printf("O endereco de memoria do %d e maior\n", num1);
    }
    else
    {
        printf("O endereco de memoria do %d e maior\n", num2);
    }

    return 0;
}