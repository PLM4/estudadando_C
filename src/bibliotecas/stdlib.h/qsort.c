#include <stdio.h>
#include <stdlib.h>

int compara(int *x, int *y)
{
    if (*x > *y)
    {
        return 1;
    }
    else if (*x == *y)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int numeros[] = {1, 6, 3, 8, 2, 9, 5};

    qsort(numeros, 7, sizeof(int), (void *)compara);

    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", numeros[i]);
    }

    return 0;
}