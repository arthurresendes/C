#include <stdio.h>

#define TAM 5

struct jogador
{

    char nome[100];

    char equipe[50];

    int gols;

    int idade;
};

int main()

{

    struct jogador jgdr[TAM];

    int maior;

    for (int i = 0; i < TAM; i++)
    {

        printf("Digite o nome do jogador %d: ", i + 1);

        scanf(" %[^\n]", jgdr[i].nome);

        printf("Digite a idade do jogador %d: ", i + 1);

        scanf("%d", &jgdr[i].idade);

        printf("Qual a equipe dele: ");

        scanf(" %[^\n]", jgdr[i].equipe);

        printf("Digite o numero de gols do jogador %d: ", i + 1);

        scanf("%d", &jgdr[i].gols);
    }

    maior = jgdr[0].gols;

    for (int i = 0; i < TAM; i++)
    {

        if (maior < jgdr[i].gols)
        {

            maior = jgdr[i].gols;
        }
    }

    printf("\n--- Artilheiro(s) com %d gols ---\n", maior);

    for (int i = 0; i < TAM; i++)
    {

        if (jgdr[i].gols == maior)
        {

            printf("Nome: %s\n", jgdr[i].nome);

            printf("Equipe: %s\n", jgdr[i].equipe);

            printf("Idade: %d\n", jgdr[i].idade);

            printf("-----------------------------\n");
        }
    }

    return 0;
}