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
    int senha;
    char nome[200];
    int confirmaSenha;
    char confirmaNome[200];
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
    printf("Digite sua senha: ");
    scanf("%d", &senha);
    getchar();
    printf("Confirme seus dados!!\n");
    printf("Digite seu nome: ");
    fgets(confirmaNome, sizeof(confirmaNome), stdin);
    confirmaNome[strcspn(confirmaNome, "\n")] = '\0';
    printf("Digite sua senha: ");
    scanf("%d", &confirmaSenha);

    if(strcmp(confirmaNome, nome) == 0 && confirmaSenha == senha){
        printf("Dados compativeis , bem-vindo!!");
    }else{
        printf("Dados incompletos!!");
        principal();
    }
    
}