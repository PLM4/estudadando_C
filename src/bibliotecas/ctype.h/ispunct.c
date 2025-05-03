#include <stdio.h>
#include <ctype.h>

int main()
{

    char test = '?';

    if (ispunct(test))
        printf("Eh ponto\n");
    else
        printf("Nao eh ponto\n");

    return 0;
}