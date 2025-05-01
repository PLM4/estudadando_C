#include <math.h>
#include <stdio.h>

int main()
{
    double a = 0;
    double b = 1;
    double c = 2;

    printf("O exponencial de %.2f eh %.2f\n", a, exp(a));
    printf("O exponencial de %.2f eh %.2f\n", b, exp(b));
    printf("O exponencial de %.2f eh %.2f\n", c, exp(c));

    double e = 2;
    double f = 3;
    double g = 7;

    printf("O log de %.2f eh %.2f\n", e, log(e));
    printf("O log de %.2f eh %.2f\n", f, log(f));
    printf("O log de %.2f eh %.2f\n", g, log(g));

    double h = 2;
    double i = 3;
    double j = 7;

    printf("O log na base 10 de %.2f eh %.2f\n", h, log10(h));
    printf("O log na base 10 de %.2f eh %.2f\n", i, log10(i));
    printf("O log na base 10 de %.2f eh %.2f\n", j, log10(j));

return 0;
}