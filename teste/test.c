#include <stdio.h>

float soma(float n1, float n2);

float subtracao(float n1, float n2);

float multiplicacao(float n1, float n2);

float divisao(float n1, float n2);

int main()
{
    int opc;
    do
    {
        printf("-----Calculadora-----\n");
        printf("1- Soma\n");
        printf("2- Subtracao\n");
        printf("3- Multiplicacao\n");
        printf("4- Divisao\n");
        printf("5- Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opc);

        if (opc >= 1 && opc <= 4)
        {
            float n1, n2;
            printf("Digite o primeiro numero: ");
            scanf("%f", &n1);
            printf("Digite o segundo numero: ");
            scanf("%f", &n2);

            float resultado;

            switch (opc)
            {
            case 1:
                resultado = soma(n1, n2);
                printf("O resultado da soma e %.2f\n", resultado);
                break;
            case 2:
                resultado = subtracao(n1, n2);
                printf("O resultado da subtracao e %.2f\n", resultado);
                break;
            case 3:
                resultado = multiplicacao(n1, n2);
                printf("O resultado da multiplicacao e %.2f\n", resultado);
                break;
            case 4:
                resultado = divisao(n1, n2);
                printf("O resultado da divisao e %.2f\n", resultado);
                break;
            default:
                printf("Opcao invalida\n");
                break;
            }
        }

    } while (opc != 5);

    return 0;
}

float soma(float n1, float n2)
{
    float resultado = n1 + n2;
    return resultado;
}

float subtracao(float n1, float n2)
{
    float resultado = n1 - n2;
    return resultado;
}

float multiplicacao(float n1, float n2)
{
    float resultado = n1 * n2;
    return resultado;
}

float divisao(float n1, float n2)
{
    if (n2 == 0)
    {
        return 0;
    }
    else
    {
        float resultado = n1 / n2;
        return resultado;
    }
}