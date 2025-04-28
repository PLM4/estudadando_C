#include <stdio.h>

// pulei esse modulo.

int main(){

    FILE *arq;

    // fopen(<nome do arquivo>, <modo de abertura>);
    // w = abertura para escrita
    // r = abertura para leitura {nao pode ser alterado}
    // wa = abertura para escrita e leitura
    arq = fopen("arquivo.txt", "w");

    // Sempre que abrir um arquivo, deve ser fechado
    fclose(arq);

    return 0;
}