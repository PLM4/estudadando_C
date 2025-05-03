#include <stdio.h>
#include <ctype.h>

int main()
{

    char test = 'a';

    if (toupper(test) == 'A')
        printf("Eh maiusculo\n");
    else
        printf("Nao eh maiusculo\n");

    return 0;
}