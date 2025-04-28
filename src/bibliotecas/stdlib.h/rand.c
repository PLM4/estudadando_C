#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); // criado para gerar uma sequencia pseudo-aleatoria

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", rand() % 51);
    }

    return 0;
}