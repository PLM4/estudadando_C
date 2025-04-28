#include <stdio.h>

void printaEsclamacao(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("!");
        }
        printf("\n");
        }
}

int main()
{
    printaEsclamacao(5);

    return 0;
}