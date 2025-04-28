#include <stdio.h>

int fib(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int qntd;

    printf("Digite a quantidade de valores que deseja calcular: ");
    scanf("%d", &qntd);

    for (int i = 0; i < qntd; i++)
    {
        printf("O numero na sequencia eh %d\n", fib(i + 1));
    }

    return 0;
}