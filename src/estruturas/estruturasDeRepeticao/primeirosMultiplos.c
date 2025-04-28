#include <stdio.h>

int main()
{
    int numero = 1;
    int contador = 0;

    printf("Apresentando os 5 primeiros multiplos de 3: ");

    while (contador < 5)
    {
        if (numero % 3 == 0)
        {
            printf("%d\n", numero);
            contador += 1;
        }
        numero += 1;
    }

    return 0;
}