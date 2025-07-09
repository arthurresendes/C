#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void arquivo();

int main(){
    arquivo();
    return 0;
}

void arquivo(){
    char nome[3][100];
    FILE *alunos;
    alunos = fopen("arquivo.txt" , "w");

    for(int i = 0 ; i < 3 ; i++){
        printf("Nome aluno %d: " , i+1);
        fgets(nome[i] , sizeof(nome[i]), stdin);
    }

    for(int i = 0 ; i < 3 ; i++){
        fprintf(alunos,"Nome do aluno %d eh %s\n" , i+1 , nome[i]);
    }

    fclose(alunos);
}