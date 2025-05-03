#include <stdio.h>
#include <ctype.h>

int main()
{

    char test = ' ';

    if (isspace(test))
        printf("Eh espaco\n");
    else
        printf("Nao eh espaco\n");

    return 0;
}