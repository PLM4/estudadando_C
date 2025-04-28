#include <stdio.h>

int main()
{
    float amigo1, amigo2, amigo3, total_apostas, porcentagem1, porcentagem2, porcentagem3, valorPremio, total_porcentagens, premio1, premio2, premio3, total_premios;

    printf("Digite o primeiro valor: ");
    scanf("%f", &amigo1);

    printf("Digite o primeiro valor: ");
    scanf("%f", &amigo2);

    printf("Digite o primeiro valor: ");
    scanf("%f", &amigo3);

    printf("Digite o valor do premio: ");
    scanf("%f", &valorPremio);

    total_apostas = (float)(amigo1 + amigo2 + amigo3);
    printf("O total de apostas foi de %.2f\n", total_apostas);

    porcentagem1 = (float)(amigo1 / total_apostas);
    porcentagem2 = (float)(amigo2 / total_apostas);
    porcentagem3 = (float)(amigo3 / total_apostas);

    total_porcentagens = porcentagem1 + porcentagem2 + porcentagem3;
    printf("Total das porcentagens: %.2f\n", total_porcentagens);

    premio1 = (float)(valorPremio * porcentagem1);
    premio2 = (float)(valorPremio * porcentagem2);
    premio3 = (float)(valorPremio * porcentagem3);
    total_premios = (float)(premio1 + premio2 + premio3);
    printf("O total de premios e: %.2f\n", total_premios);

    printf("O apostador 1 apostou %.2f que corresponde a %.2f e devera receber %.2f\n", amigo1, porcentagem1, premio1);

    printf("O apostador 2 apostou %.2f que corresponde a %.2f e devera receber %.2f\n", amigo2, porcentagem2, premio2);

    printf("O apostador 3 apostou %.2f que corresponde a %.2f e devera receber %.2f\n", amigo3, porcentagem3, premio3);

    return 0;
}