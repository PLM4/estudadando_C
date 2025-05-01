#include <math.h>
#include <stdio.h>

int main()
{
    int x = 3;

    printf("O valor %lf arredondado para cima eh %lf\n", log(x), ceil(log(x)));

    printf("O valor %lf arredondado para baixo eh %lf\n", log(x), floor(log(x)));

    return 0;
}