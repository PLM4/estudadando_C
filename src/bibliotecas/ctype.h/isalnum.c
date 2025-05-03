#include <stdio.h>
#include <ctype.h>

int main()
{

    char test = 'c';

    char teste = '4';

    if (isalnum(test))
        printf("Eh alfanumerico\n");
    else
        printf("Nao eh alfanumerico\n");

    if (isalnum(teste))
        printf("Eh alfanumerico\n");
    else
        printf("Nao eh alfanumerico\n");

    return 0;
}