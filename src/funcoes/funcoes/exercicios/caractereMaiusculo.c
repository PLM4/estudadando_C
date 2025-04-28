#include <stdio.h>

char charMaiusculo(char letra)
{

    char letraMaiuscula;

    for (int i = 97; i < 122; i++)
    {
        if (letra == i)
        {
            letraMaiuscula = i - 32;
        }
    }

    return letraMaiuscula;
}

int main()
{
    char maiuscula = charMaiusculo('s');

    printf("A letra maiuscula e: %c", maiuscula);
    return 0;
}