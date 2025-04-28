#include <stdio.h>

int fatorial(int x)
{

    if (x == 0)
    {
        return 1;
    }
    else
    {
        return x * fatorial(x - 1);
    }
}

int main()
{

    int x;

    printf("Digite o numero que deseja fatorar: ");
    scanf("%d", &x);

    printf("O fatorial de %d eh %d\n", x, fatorial(x));
}