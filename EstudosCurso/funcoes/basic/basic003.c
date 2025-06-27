#include <stdio.h>

#include <stdlib.h>

void mensagem(char nome[])
{

    printf("Ola %s", nome);
}

int main()

{

    char nome[100];

    printf("Digite seu nome : ");

    fgets(nome, sizeof(nome), stdin);

    mensagem(nome);

    return 0;
}