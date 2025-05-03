#include <stdio.h>
#include <time.h>

int main()
{

    time_t tempoBruto;
    struct m *info;

    time(&tempoBruto);

    info = localtime(&tempoBruto);

    printf("Data e hora local: %s\n", asctime(info));

    return 0;
}