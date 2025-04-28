#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

    char str[5];
    double valor_i;

    strcpy(str, "4"); //Se ele não consegue converter, retorna 0

    valor_i = atoi(str);

    printf("%d\n", valor_i);

    return 0;
}