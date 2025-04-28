#include <stdio.h>

// Tipo de dados

// Alfanumericos:
// - Character;
// - String;

// * em C, não existe o tipo de dado __AW_STRING_A__

// ex: String
// "Lorem ibson";

// ex: Character
// 's';
int main()
{
    // char opcao;

    // printf("Informe uma opcao: \n");
    // printf("a - Saldo da conta: \n");
    // printf("b - Extrato da conta: \n");
    // printf("c - Limite da conta: \n");

    // scanf("%c", &opcao);

    // if (opcao == 'a')
    // {
    //     printf("Seu saldo é...");
    // }
    // else if (opcao == 'b')
    // {
    //     printf("Seu extrato é...");
    // }
    // else if (opcao == 'c')
    // {
    //     printf("Seu limite é...");
    // }
    // else
    // {
    //     printf("Opcao invalida.");
    // }

    // for (int i = 97; i <= 122; i++)
    // {
    //     printf("%c\n", i);
    // }

    // "Declaração"  de uma String em C

    char nome[50];

    printf("Qual é seu nome: ");
    gets(nome);

    printf("O seu nome é %s", nome);

    return 0;
}