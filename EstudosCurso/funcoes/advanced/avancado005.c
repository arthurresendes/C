#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#define MAX_ALUNOS 100

#define MAX_NOME 200

// Estrutura do aluno

typedef struct
{

    char nome[MAX_NOME];

} Aluno;

// Vetor global para armazenar os alunos

Aluno alunos[MAX_ALUNOS];

int totalAlunos = 0;

// Funções

void adicionarAluno();

void listarAlunos();

void buscarAluno(char nome[]);

int main()
{

    int opcao;

    char nomeBusca[MAX_NOME];

    do
    {

        printf("\n--- MENU ---\n");

        printf("1. Adicionar aluno\n");

        printf("2. Listar alunos\n");

        printf("3. Buscar aluno\n");

        printf("0. Sair\n");

        printf("Escolha uma opção: ");

        scanf("%d", &opcao);

        getchar(); // limpar '\n'

        switch (opcao)
        {

        case 1:

            adicionarAluno();

            break;

        case 2:

            listarAlunos();

            break;

        case 3:

            printf("Digite o nome para buscar: ");

            fgets(nomeBusca, MAX_NOME, stdin);

            nomeBusca[strcspn(nomeBusca, "\n")] = '\0'; // remove '\n'

            buscarAluno(nomeBusca);

            break;

        case 0:

            printf("Saindo...\n");

            break;

        default:

            printf("Opção inválida!\n");
        }

    } while (opcao != 0);

    return 0;
}

void adicionarAluno()
{

    int quantidade;

    printf("Quantos alunos deseja adicionar? ");

    scanf("%d", &quantidade);

    getchar(); // limpa '\n'

    for (int i = 0; i < quantidade; i++)
    {

        if (totalAlunos >= MAX_ALUNOS)
        {

            printf("Limite de alunos atingido!\n");

            break;
        }

        printf("Nome do aluno %d: ", totalAlunos + 1);

        fgets(alunos[totalAlunos].nome, MAX_NOME, stdin);

        alunos[totalAlunos].nome[strcspn(alunos[totalAlunos].nome, "\n")] = '\0'; // remove \n

        totalAlunos++;
    }
}

void listarAlunos()
{

    if (totalAlunos == 0)
    {

        printf("Nenhum aluno cadastrado.\n");

        return;
    }

    printf("\n--- Lista de Alunos ---\n");

    for (int i = 0; i < totalAlunos; i++)
    {

        printf("Aluno %d: %s\n", i + 1, alunos[i].nome);
    }
}

void buscarAluno(char nome[])
{

    int encontrado = 0;

    for (int i = 0; i < totalAlunos; i++)
    {

        if (strstr(alunos[i].nome, nome))
        {

            printf("Aluno encontrado: %s (posição %d)\n", alunos[i].nome, i + 1);

            encontrado = 1;
        }
    }

    if (!encontrado)
    {

        printf("Aluno não encontrado.\n");
    }
}