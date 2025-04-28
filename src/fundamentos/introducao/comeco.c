#include <stdio.h>

int main()
{
    int n1, quadrado = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    quadrado = n1 * n1;

    printf("O quadrado e %d", quadrado);
    return 0;
}