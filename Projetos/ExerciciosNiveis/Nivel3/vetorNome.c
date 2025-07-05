#include <stdio.h>

void principal();

int main()
{
    principal();
    return 0;
}

void principal()
{
    char nome[5][50];
    for(int i = 0; i < 5 ; i++){
        printf("Digite o nome na posicao [%d]: ", i);
        scanf("%49s" , nome[i]);
    }

    for(int i = 0; i < 5 ; i++){
        printf("Nome[%d]: %s\n" , i , nome[i]);
    }

    
}
