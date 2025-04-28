#include <stdio.h>

int main()
{
    int numero, maior, menor;

    for (int i = 0; i < 10; i++) // Corrigir para 10 números
    {
        printf("Digite o %dº número de 10: ", i + 1);
        scanf("%d", &numero);

        if (i == 0) // Na primeira iteração, inicializa maior e menor
        {
            maior = numero;
            menor = numero;
        }
        else
        {
            if (numero > maior)
            {
                maior = numero;
            }

            if (numero < menor)
            {
                menor = numero;
            }
        }
    }

    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);

    return 0;
}
