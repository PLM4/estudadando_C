#include <stdio.h>

struct st_aluno
{
    char nome[100];
    char matricula[20];
    char curso[50];
} alunos[3];

int main()
{

    for (int i = 0; i < 3; i++)
    {
        printf("Informe o nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, 100, stdin);

        printf("Informe a matricula do aluno %d: ", i + 1);
        fgets(alunos[i].matricula, 20, stdin);

        printf("Informe o curso do aluno %d: ", i + 1);
        fgets(alunos[i].curso, 50, stdin);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("**********DADOS DO ALUNO %d**********\n", i + 1);
        printf("Nome: %s", alunos[i].nome);
        printf("Matricula %s", alunos[i].matricula);
        printf("Curso %s", alunos[i].curso);
    }

    return 0;
}