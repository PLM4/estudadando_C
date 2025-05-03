#include <stdio.h>
#include <time.h>

int main()
{

    long int fim_t, inicio_t, total_t;

    inicio_t = clock();

    printf("Realizando um loop grande, inicio_t: %ld\n", inicio_t);
    for (int i = 0; i <= 100000000; i++)
    {
    }

    fim_t = clock();

    printf("Finalizando o loop em, fim_t: %ld", fim_t);

    total_t = (double)(fim_t - inicio_t) / CLOCKS_PER_SEC;

    printf("Clocks por segundo: %ld\n", CLOCKS_PER_SEC);

    printf("Tempo total utilizado pela CPU: %ld\n", total_t);

    printf("Finalizando o programa.");

    return 0;
}