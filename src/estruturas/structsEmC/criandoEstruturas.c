// #include <stdio.h>
// #include <string.h>

// struct st_aluno
// {
//     char matricula[10];
//     char nome[50];
//     int idade;
//     float altura;
// };

// int main()
// {

//     struct st_aluno aluno1;

//     printf("Informe o nome do aluno 1: \n");
//     fgets(aluno1.nome, 50, stdin);

//     printf("Informe a matricula do aluno 1: \n");
//     fgets(aluno1.matricula, 10, stdin);

//     printf("Informe a idade do aluno 1: \n");
//     scanf("%d", &aluno1.idade);

//     printf("Informe a altura do aluno 1: \n");
//     scanf("%f", &aluno1.altura);

//     printf("**********DADOS DO ALUNO 1**********\n");
//     printf("Matricula: %s", aluno1.matricula);
//     printf("Nome: %s", aluno1.nome);
//     printf("Idade: %d\n", aluno1.idade);
//     printf("Altura: %.2f\n", aluno1.altura);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// struct st_aluno
// {
//     char matricula[10];
//     char nome[50];
//     int idade;
//     float altura;
// } alunos[3];
// // declarando alunos diretamnente na estrutura

// int main()
// {
//     for (int i = 0; i < 3; i++)
//     {
//         printf("Informe o nome do aluno 1: \n");
//         fgets(alunos[i].nome, 50, stdin);

//         printf("Informe a matricula do aluno 1: \n");
//         fgets(alunos[i].matricula, 10, stdin);

//         printf("Informe a idade do aluno 1: \n");
//         scanf("%d", &alunos[i].idade);

//         printf("Informe a altura do aluno 1: \n");
//         scanf("%f", &alunos[i].altura);
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         printf("**********DADOS DO ALUNO 1**********\n");
//         printf("Matricula: %s", alunos[i].matricula);
//         printf("Nome: %s", alunos[i].nome);
//         printf("Idade: %d\n", alunos[i].idade);
//         printf("Altura: %.2f\n", alunos[i].altura);
//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>

struct st_contato
{
    char nome[50];
    char telefone[20];
    char email[50];
    int data_nascimento;
};

struct st_agenda
{
    struct st_contato contatos[10];
} agenda;

int main()
{
    // precisa de melhoria pois o nome só é lido uma vez, uma das formas de melhorar é usando a biblioteca stdlib.h e o comando atoi() e atof().
    for (int i = 0; i < 3; i++)
    {
        printf("Informe o nome do contato: \n");
        fgets(agenda.contatos[i].nome, 50, stdin);

        printf("Informe o telefone do contato: \n");
        fgets(agenda.contatos[i].telefone, 10, stdin);

        printf("Informe emal do contato: \n");
        fgets(agenda.contatos[i].email, 10, stdin);

        printf("Informe a data de nascimento do contato: \n");
        scanf("%d", &agenda.contatos[i].data_nascimento);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("**********DADOS DA AGENDA**********\n");
        printf("Nome: %s", agenda.contatos[i].nome);
        printf("Telefone: %s", agenda.contatos[i].telefone);
        printf("Data de nascimento: %d\n", agenda.contatos[i].data_nascimento);
        printf("Email: %s\n", agenda.contatos[i].email);
    }

    return 0;
}