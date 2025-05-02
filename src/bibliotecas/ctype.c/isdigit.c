#include <stdio.h>
#include <ctype.h>

int main()
{

    char test = '4';

    if (isdigit(test))
        printf("Eh numero\n");
    else
        printf("Nao eh numero\n");

    return 0;
}