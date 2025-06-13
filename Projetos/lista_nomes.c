#include <stdio.h>

#include <string.h>

int main()

{

    int quantidade;

    printf("Quantos nomes sua lista tem ? ");

    scanf("%d", &quantidade);

    getchar();

    char nome[quantidade][50];

    for (int i = 0; i < quantidade; i++)
    {

        printf("Digite o nome: ");

        fgets(nome[i], sizeof(nome[i]), stdin);
    }

    for (int i = 0; i < quantidade; i++)
    {

        printf("%d. %s\n", i + 1, nome[i]);
    }

    return 0;
}