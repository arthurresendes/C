#include <stdio.h>

int main(){
    float vetor[10];
    float media ;
    float soma;
    float maior;
    float menor;

    for(int i = 0 ; i < 10 ; i++){
        printf("Digite a nota %d: " , i+1);
        scanf("%f" , &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];
    for(int i = 0 ; i<10 ; i++){
        printf("\n Nota: %.2f Aluno %d" , vetor[i] , i+1);
        if(maior < vetor[i]){
            maior = vetor[i];
        }

        if(menor > vetor[i]){
            menor = vetor[i];
        }
        soma += vetor[i];
        media = soma/10;
    }

    printf("\n Media das notas: %.2f" , media);
    printf("\n Maior nota: %.2f" , maior);
    printf("\n Menor nota: %.2f" , menor);


    return 0;
}
