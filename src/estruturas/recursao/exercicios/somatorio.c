#include <stdio.h>

int somatorio(int x)
{

    if (x == 0)
    {
        return 0;
    }
    else
    {
        return x + somatorio(x - 1);
    }
}

int main()
{

    int x;

    printf("Digite o numero que deseja somar: ");
    scanf("%d", &x);

    printf("O somatorio de %d eh %d\n", x, somatorio(x));
}