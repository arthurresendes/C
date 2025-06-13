#include <stdio.h>

int main()
{
    int idade;
    char nome[300];
    FILE *f;
    f = fopen("arquivo.txt", "w");
    printf("Digite seu nome: ");
    fgets(nome, 300, stdin);
    printf("\n Digite sua idade: ");
    scanf("%d", &idade);

    fprintf(f, "Seu nome: %s ", nome);
    fprintf(f, "Sua idade %d ", idade);

    fclose(f);
    return 0;
}