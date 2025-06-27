#include <stdlib.h>

#include <stdio.h>

#include <string.h>

void verificaCpf(char cpf[]);

int main()

{

    char cpf[20];

    printf("Digite seu CPF (apenas números): ");

    scanf("%s", cpf);

    verificaCpf(cpf);

    return 0;
}

void verificaCpf(char cpf[])
{

    int tamanho = strlen(cpf);

    if (tamanho > 11)
    {

        printf("Digitou numero a mais, tente novamente");
    }
    else if (tamanho < 11)
    {

        printf("Digitou mais de 11 numeros , tente novamente");
    }
    else
    {

        printf("CPF valido");
    }
}