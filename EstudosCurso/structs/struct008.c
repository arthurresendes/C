#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct aluno
{
    char nome[100];
    char matriculastr[10];
    char curso[50];
    int matricula;
};

int lerLetras(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isdigit(str[i]) && str[i] != ' ')
            return 0;
    }
    return 1;
}

int lerNum(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (!isdigit(str[i]))
            return 0;
    }
    return 1;
}

int main()
{

    struct aluno al[5];

    for (int i = 0; i < 5; i++)
    {
        do
        {
            printf("Digite o nome do aluno %d: ", i + 1);
            fgets(al[i].nome, sizeof(al[i].nome), stdin);
            al[i].nome[strcspn(al[i].nome, "\n")] = '\0';
        } while (!lerLetras(al[i].nome) || strlen(al[i].nome) == 0);

        do
        {
            printf("Digite a matricula do aluno %d: ", i + 1);
            fgets(al[i].matriculastr, sizeof(al[i].matriculastr), stdin);
            al[i].matriculastr[strcspn(al[i].matriculastr, "\n")] = '\0';
        } while (!lerNum(al[i].matriculastr) || strlen(al[i].matriculastr) == 0);
        al[i].matricula = atoi(al[i].matriculastr);

        do
        {
            printf("Digite o curso do aluno %d: ", i + 1);
            fgets(al[i].curso, sizeof(al[i].curso), stdin);
            al[i].curso[strcspn(al[i].curso, "\n")] = '\0';
        } while (!lerLetras(al[i].curso) || strlen(al[i].curso) == 0);
    }

    printf("---- Dados dos alunos cadastrados ----\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", al[i].nome);
        printf("Matrícula: %d\n", al[i].matricula);
        printf("Curso: %s\n", al[i].curso);
        printf("------------------------\n");
    }

    return 0;
}
