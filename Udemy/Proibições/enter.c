#include <stdlib.h>

#include <string.h>

#include <stdio.h>

int main()

{

    char nome[100];

    do
    {

        printf("Digite seu nome: ");

        fgets(nome, sizeof(nome), stdin);

        nome[strcspn(nome, "\n")] = '\0'; // tira o \n automático do fgets

    } while (strlen(nome) == 0); // strlen não permite apertar enter sem nada digitado

    return 0;
}