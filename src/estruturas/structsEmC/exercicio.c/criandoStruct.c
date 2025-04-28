#include <stdio.h>

struct st_pessoa
{
    char nome[50];
    int idade;
    char endereco[100];
} pessoa;

int main()
{

    printf("Digite o nome da pessoa: ");
    fgets(pessoa.nome, 50, stdin);

    printf("Digite a idade da pessoa: ");
    scanf("%d", &pessoa.idade);    
    getchar(); //resolvendo o problema da quebra de linha     

    printf("Digite o seu endereco: ");
    fgets(pessoa.endereco, 100, stdin);

    printf("Nome: %s\nIdade: %d\nEndereco: %s\n", pessoa.nome, pessoa.idade, pessoa.endereco);

    return 0;
}