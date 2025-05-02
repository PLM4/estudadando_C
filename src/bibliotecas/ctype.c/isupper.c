#include <stdio.h>
#include <ctype.h>

int main()
{

    char test = 'A';

    if (isupper(test))
        printf("Eh maiusculo\n");
    else
        printf("Nao eh maiusculo\n");

    return 0;
}