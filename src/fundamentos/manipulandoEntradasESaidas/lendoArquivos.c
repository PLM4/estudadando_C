#include <stdio.h>

int main()
{

    FILE *arq;
    char c;

    // fopen(<nome do arquivo>, <modo de abertura>);
    // w = abertura para escrita
    // r = abertura para leitura {nao pode ser alterado}
    // wa = abertura para escrita e leitura
    arq = fopen("C:\\Users\\janes\\estudando-C\\manipulandoEntradasESaidas\\arquivo.txt", "r");

    if (arq == NULL)
    {
        printf("Nao foi possivel abrir o arquivo\n");
    }
    else
    {
        while ((c = getc(arq)) != EOF) // EOF = end of file
        {
            printf("%c", c);
        }
    }

    // Sempre que abrir um arquivo, deve ser fechado
    fclose(arq);

    return 0;
}