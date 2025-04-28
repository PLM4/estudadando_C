#include <stdio.h>

int main()
{

    int numeros[2][3];
    numeros[0][0] = 1;
    numeros[0][1] = 15;
    numeros[1][0] = 2;
    numeros[1][1] = 8;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("numeros[%d][%d] vale %d\n", i, j, numeros[i][j]);
        }
    }

    // vetores reais
    float numero[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Digite o valor x da possicao [%d][%d]: ", i, j);
            scanf("%f", &numero[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("numeros[%d][%d] vale %.2f\n", i, j, numero[i][j]);
        }
    }

    return 0;
}