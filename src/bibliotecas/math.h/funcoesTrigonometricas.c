#include <math.h>
#include <stdio.h>

int main()
{
    int angulo = 45;

    float cosseno = cos(angulo);

    float seno = sin(angulo);

    float tangente = tan(angulo);

    printf("O cosseno do angulo %d eh %.2f\n", angulo, cosseno);

    printf("O seno do angulo %d eh %.2f\n", angulo, seno);

    printf("A tangente do angulo %d eh %.2f\n", angulo, tangente);
}