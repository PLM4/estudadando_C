#include <stdio.h>
#include <ctype.h>

int main()
{

    char test = 'A';

    if (tolower(test) == 'a')
        printf("Eh minusculo\n");
    else
        printf("Nao eh minusculo\n");

    return 0;
}