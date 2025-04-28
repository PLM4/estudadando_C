#include <stdio.h>

int main()
{

    int num = 1;
    char caractere = 'a';
    float real = 1.5;

    int* ponteiro_inteiro;
    float* ponteiro_real;
    char* ponteiro_caractere;

    printf("Valor inteiro antes %d\n", num);
    printf("Valor real antes %.2f\n", real);
    printf("Valor caractere antes %c e %d\n", caractere, caractere);

    ponteiro_inteiro = &num;
    ponteiro_real = &real;
    ponteiro_caractere = &caractere;

    printf("Valor inteiro depois %d\n", num);
    printf("Valor real depois %.2f\n", real);
    printf("Valor caractere depois %c e %d\n", caractere, caractere);

    return 0;
}