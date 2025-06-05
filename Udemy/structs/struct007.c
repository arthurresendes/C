#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct pessoa{
char nome[100];
char idadestr[10];
char endereco[50];
int idade;
};

int lerApenasLetras(char *str){
    for(int i = 0; str[i] != '\0' ; i++){
        if(isdigit(str[i]) &&  str[i] != ' ' )
        return 0;
    }
return 1;
}

int lerApenasNumeros(char *str){
    for(int i = 0; str[i] != '\0' ; i++){
        if(!isdigit(str[i]))
        return 0;
    }
return 1;
}

int main(){
    struct pessoa p;
    do{
    printf("Digite seu nome: ");
    fgets(p.nome , sizeof(p.nome) , stdin);
    p.nome[strcspn(p.nome, "\n")] = '\0';
    }while(!lerApenasLetras(p.nome) || strlen(p.nome) == 0);


    do{
    printf("Digite sua idade: ");
    fgets(p.idadestr , sizeof(p.idadestr) , stdin);
    p.idadestr[strcspn(p.idadestr, "\n")] = '\0';
    }while(!lerApenasNumeros(p.idadestr) || strlen(p.idadestr) == 0);
    p.idade = atoi(p.idadestr);

    do{
    printf("Digite seu endereço: ");
    fgets(p.endereco , sizeof(p.endereco) , stdin);
    p.endereco[strcspn(p.endereco, "\n")] = '\0';
    }while(!lerApenasLetras(p.endereco) || strlen(p.endereco) == 0);


    printf("Bem vindo %s, voce tem %d anos e mora em %s", p.nome , p.idade,p.endereco );


    return 0;
}

