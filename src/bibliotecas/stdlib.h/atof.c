#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char str[5];
    double valor_d;

    strcpy(str, "4.2"); //Se por acaso ele não identifica o numero após o ponto, ele retorna 0

    valor_d = atof(str);

    printf("%.2f\n", valor_d);

    return 0;
}
