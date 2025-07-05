#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXPROVAS 50

typedef struct{
    int matricula;
    int nota[MAXPROVAS];
    float media;
    char nome[100];
}Aluno;


void principal();

int main()
{
    principal();
    return 0;
}

void principal()
{
    Aluno al;
    int soma = 0;
    al.matricula = 0;
    printf("Digite o nome do aluno: ");
    fgets(al.nome, sizeof(al.nome), stdin);
    al.nome[strcspn(al.nome, "\n")] = '\0';
    al.matricula++;
    int prova;
    printf("Quantas provas o aluno %s teve: " , al.nome);
    scanf("%d" , &prova);

    if (prova > MAXPROVAS || prova <= 0) {
        printf("Número de provas inválido (1 a %d).\n", MAXPROVAS);
        principal();
    }
    for(int i = 0; i < prova ; i++){
        printf("Digite a nota[%d]: " , i+1);
        scanf("%d" , &al.nota[i]);
        soma = soma + al.nota[i];
    }

    al.media = soma/prova;

    printf("\n========%s=======\n" , al.nome);
    printf("Matricula: %d\n" , al.matricula);
    printf("Media: %.2f\n" , al.media);
}
