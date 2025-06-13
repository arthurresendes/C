#include <stdio.h>

int main()
{
    char nome[200];
    int salario;
    printf("Digite seu nome: ");
    fgets(nome, 20, stdin);
printf("Digite seu salário: ");
scanf("%d" , &salario);
if (salario >= 6000){
        printf("%s, você é classe 4", nome);
    } else if (salario >= 4000){
        printf("%s, você é classe 3", nome);
    } else if (salario >= 2000){
        printf("%s, você é classe 2", nome);
    } else {
        printf("%s, você é classe 1", nome);
    }

    return 0;
}