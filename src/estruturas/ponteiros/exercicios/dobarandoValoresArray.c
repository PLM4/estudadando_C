#include <stdio.h>

int main()
{

    int numeros[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("O dobro de %d eh %d\n", *(numeros + i), *(numeros + i) * 2);
    }

    return 0;
}