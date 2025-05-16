

#include <stdio.h>

#include <string.h>

struct aluno
{

    char nome[100];

    int idade;

    float nota;
};

int main()

{

    struct aluno alunos[5];

    int i;

    printf("Cadastra 5 alunos: \n");

    for (i = 0; i < 5; i++)
    {

        printf("Nome: ");

        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);

        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("Idade: ");

        scanf("%d", &alunos[i].idade);

        printf("Nota: ");

        scanf("%f", &alunos[i].nota);

        getchar();
    }

    float maiorNota = alunos[0].nota;

    int indiceMaior = 0;

    for (i = 1; i < 5; i++)
    {

        if (alunos[i].nota > maiorNota)
        {

            maiorNota = alunos[i].nota;

            indiceMaior = i;
        }
    }

    printf("\nAluno com a maior nota:\n");

    printf("Nome: %s\n", alunos[indiceMaior].nome);

    printf("Idade: %d\n", alunos[indiceMaior].idade);

    printf("Nota: %.2f\n", alunos[indiceMaior].nota);

    return 0;
}