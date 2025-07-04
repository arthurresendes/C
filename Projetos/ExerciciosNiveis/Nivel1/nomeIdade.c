#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void principal();

int main()
{
    principal();
    return 0;
}

void principal()
{
    int idade;
    char nome[200];
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if (idade >= 18)
    {
        printf("Bem-Vindo %s voce tem acesso liberado!!", nome);
    }else{
        printf("Ola %s voce nao tem acesso!!", nome);
    }
}