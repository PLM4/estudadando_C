#include <stdio.h>
#include <math.h>

int main(){
    int angulo = 45;

    float cossenoH = cosh(angulo);

    float senoH = sinh(angulo);

    float tangenteH = tanh(angulo);

    printf("O cosseno hiperbolico do angulo %d eh %.2f\n", angulo, cossenoH);

    printf("O seno hiperbolico do angulo %d eh %.2f\n", angulo, senoH);

    printf("A tangente hiperbolica do angulo %d eh %.2f\n", angulo, tangenteH);

    return 0;
}