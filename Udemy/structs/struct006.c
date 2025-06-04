#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoas
{
    char nome[100];
    int idade;
};

int main()
{
    struct pessoas p;
    system("cls");
    printf("Digite seu nome: ");
    fgets(p.nome, sizeof(p.nome), stdin);
    p.nome[strcspn(p.nome, "\n")] = '\0';
    printf("Digite sua idade: ");
    scanf("%d", &p.idade);
    system("cls");
    printf("Seu nome é %s e voce tem %d anos ", p.nome, p.idade);
    return 0;
}
