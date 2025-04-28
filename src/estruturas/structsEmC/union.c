// #include <stdio.h>
// #include <string.h>

// // union separa e utiliza sempre o espaco da maior variavel
// union un_pessoa
// {
//     char nome[50];
//     int idade;
// };

// int main()
// {

//     union un_pessoa pes;

//     strcpy(pes.nome, "Joao");

//     printf("Nome: %s\n", pes.nome);

//     pes.idade = 12;

//     printf("Idade: %d\n", pes.idade);

//     printf("A variavel 'pes' ocupa %ld bytes em memoria\n", sizeof(pes));

//     return 0;
// }

#include <stdio.h>

// union separa e utiliza sempre o espaco da maior variavel
union un_numeros
{
    int num1, num2, num3, num4, num5;
} n;

int main()
{

    int soma = 0;

    n.num1 = 1;
    soma = soma + n.num1;
    printf("num1: %d\n", n.num1);
    n.num2 = 3;
    soma = soma + n.num2;
    printf("num2: %d\n", n.num2);
    n.num3 = 5;
    soma = soma + n.num3;
    printf("num3: %d\n", n.num3);
    n.num4 = 7;
    soma = soma + n.num4;
    printf("num4: %d\n", n.num4);
    n.num5 = 9;
    soma = soma + n.num5;
    printf("num5: %d\n", n.num5);

    printf("A variavel 'n' ocupa %ld bytes em memoria\n", sizeof(n));

    printf("Memoria total ocupada %d\n", soma);

    return 0;
}