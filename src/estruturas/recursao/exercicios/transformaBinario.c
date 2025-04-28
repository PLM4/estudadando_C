#include <stdio.h>

int transformaBinario(int x)
{
    if (x == 0)
    {
        return 0;
    }
    else
    {
        return x % 2 + 10 * transformaBinario(x / 2);
    }
}

int main()
{

    int x;

    printf("Digite o numero que deseja converter para binario: ");
    scanf("%d", &x);

    printf("O binario de %d eh %d\n", x, transformaBinario(x));

    return 0;
}