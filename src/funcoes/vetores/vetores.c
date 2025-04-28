#include <stdio.h>

int main()
{
    // vetores e string;
    char nome[50];
    //"string"
    printf("Qual e o seu nome?");
    gets(nome);
    printf("ola %s\n", nome);

    // vetores e caracteres
    char letras[26];
    //'c'
    int count = 0;
    for (int i = 97; i < 122; i++)
    {
        letras[count] = i;
        count += 1;
    }

    for (int i = 0; i < 25; i++)
    {
        printf("%d == %c\n", letras[i], letras[i]);
    }

    // vetores inteiros
    int numeros[5];
    numeros[0] = 1;
    numeros[1] = 15;
    numeros[2] = 4;
    numeros[3] = 2;
    numeros[4] = 8;

    for (int i = 0; i < 5; i++)
    {
        printf("%i\n", numeros[i]);
    }

    // vetores reais
    float numero[5];
    return 0;
}