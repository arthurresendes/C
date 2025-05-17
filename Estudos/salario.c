#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"
int main()
{
    char nome[100], cpf[25];
    double salario, anual, reducao, imposto, medico;
    int filho;

    do{
    printf("Digite seu nome : ");
    fgets(nome, sizeof(nome), stdin);
    }while(!ehSomenteLetras(nome) || strlen(nome) == 0);

    getchar();

    printf("Digite seu CPF : ");
    scanf("%s", cpf);

    printf("Digite seu salario: ");
    scanf("%lf", &salario);

    printf("Digite quantidade de filhos : ");
    scanf("%d", &filho);

    printf("Digite quando gastou na assistencia medica : ");
    scanf("%lf", &medico);

    if (salario <= 5000)
    {
        reducao = 0;
    }
    else if (salario <= 7000)
    {
        reducao = salario * 0.07;
    }
    else if (salario <= 12000)
    {
        reducao = salario * 0.125;
    }
    else if (salario <= 15000)
    {
        reducao = salario * 0.15;
    }
    else
    {
        reducao = salario * 0.255;
    }

    filho = filho * 2000;
    imposto = medico - filho;

    if (imposto < 0)
    {
        imposto = 0;
    }
    salario = salario * 12;
    reducao = reducao * 12;
    anual = salario - reducao;

    printf("\nSeu nome  é  %s\n", nome);
    printf("Seu CPF é %s\n", cpf);
    printf("Sua renda anual menos os impostos medicos e salarial são  %.2lf\n", anual - imposto);
    printf("O imposto  medico mais a reducao salarial é de R$ %.2lf\n", imposto + reducao);

    return 0;
}