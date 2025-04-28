#include <stdio.h>

#ifndef PI // Cria caso não exista
#define PI 3.1415
#endif

// ifndef - Diretiva de compilação

int main()
{
    printf("O valor de PI eh: %f", PI);

#ifdef PI //Executa caso exista
    printf("O valor de PI eh: %f", PI);
#endif

    return 0;
}