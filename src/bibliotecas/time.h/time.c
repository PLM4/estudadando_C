#include <stdio.h>
#include <time.h>

// https://pt.wikipedia.org/wiki/Era_Unix (Time() retorna o tempo atual baseado no unix timestamp)

int main()
{

    time_t segundos;

    segundos = time(NULL);

    printf("Horas desde 1 de janeiro de 1970: %ld\n", segundos / 3600);

    return 0;
}