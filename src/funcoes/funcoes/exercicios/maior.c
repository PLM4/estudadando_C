#include <stdio.h>

int maiorQue(int numero[], int tamanho){
    if(tamanho <= 0) return -1;

    int maior = numero[0];

    for (int i = 0; i < tamanho; i++)
    {
        if(numero[i] > maior){
            maior = numero[i]; 
        }
    }
    return maior;
}

int main(){
    int numero[2] = {4, 25};

    int tamanho = sizeof(numero) / sizeof(numero[0]);

    int maior = maiorQue(numero, tamanho);
    printf("O maior numero e: %d", maior);

    return 0;
}