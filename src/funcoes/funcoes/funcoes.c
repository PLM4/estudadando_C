#include <stdio.h>

void retornaChar(char caractere){
    printf("%c", caractere + 1);
}

// Prototipo de função
void mensagem();

// Prototipo de função
int soma(int n1, int n2);

int main(){

    int n1, n2, result;

    printf("Digite o primeiro numero:");
    scanf("%d", &n1);

    printf("Digite o segundo numero:");
    scanf("%d", &n2);

    result = soma(n1, n2);

    printf("O resultado da soma e %d", result);

    return 0;
}

int soma(int n1, int n2){
    int soma = n1 + n2;
    return soma;
}

void mensagem(){
    printf("ola\n");
}