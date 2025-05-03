#include <stdio.h>
#include <ctype.h>

int main()
{

    char test = 'c';

    if (isalpha(test))
        printf("Eh alfabetico\n");
    else
        printf("Nao eh alfabetico\n");

    return 0;
}