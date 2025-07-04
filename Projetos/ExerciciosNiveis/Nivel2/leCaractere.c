#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void principal();

int main()
{
    principal();
    return 0;
}

void principal()
{

    char opcao;
    printf("\n===========Exercicios===========\n");
    printf("Digite uma letra: \n");
    scanf(" %c" , &opcao);
    opcao = toupper(opcao);
    

    if(opcao == 'A' ||opcao == 'E' ||opcao == 'I' ||opcao == 'O' ||opcao == 'U'){
        printf("Letra eh vogal\n");
    }else{
        printf("Nao eh vogal\n");
    }
    
}
