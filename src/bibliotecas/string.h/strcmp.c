#include <stdio.h>
#include <string.h>

int main()
{

    char str1[20], str2[20];

    strcpy(str1, "Terca");

    strcpy(str2, "Terca");

    if (strcmp(str1, str2))
    {
        printf("As strings sao diferentes.");
    }
    else
        printf("As strings sao iguais.");
    {
    }

    return 0;
}