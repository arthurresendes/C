#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[100];
    char senha[100];
    char confirma[100];
}Cadastro;

void arquivo();
void criptografa(char *senha);

int main(){
    arquivo();
    return 0;
}

void criptografa(char *senha){
    for(int i = 0 ; senha[i] != '\0' ; i++){
        senha[i] = senha[i] + 3;
    }
}

void arquivo(){
    Cadastro cdr;
    FILE *armazena;
    armazena = fopen("arquivo.txt" , "w");

    printf("Digite seu nome: ");
    fgets(cdr.nome , sizeof(cdr.nome), stdin);
    cdr.nome[strcspn(cdr.nome, "\n")] = '\0';
    printf("Digite sua senha: ");
    fgets(cdr.senha , sizeof(cdr.senha), stdin);
    cdr.senha[strcspn(cdr.senha, "\n")] = '\0';
    printf("Confirme sua senha: ");
    fgets(cdr.confirma , sizeof(cdr.confirma), stdin);
    cdr.confirma[strcspn(cdr.confirma, "\n")] = '\0';

    if(strcmp(cdr.senha , cdr.confirma) == 0){
        printf("Cadastro Valido!!\n");
        criptografa(cdr.senha);
        fprintf(armazena , "Nome: %s Senha: %s" , cdr.nome , cdr.senha);
    }else{
        printf("Dados nao compativeis!!\n");
        arquivo();
    }

    fclose(armazena);
}