#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char *nome;
    int tamanho;
    printf("Digite o tamanho do nome: ");
    scanf("%d", &tamanho);
    getchar();

    nome = (char *)malloc((tamanho + 1) * sizeof(char));
    if (nome == NULL)
    {
        printf("Erro ao alocar memoria.\n");
        return 1; // Retorna um código de erro se a alocação falhar
    }
    printf("Digite o nome: ");
    fgets(nome, tamanho + 1, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Nome digitado: %s\n", nome);

    free(nome);

    return 0;
}
