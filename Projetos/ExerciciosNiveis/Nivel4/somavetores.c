#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void vetores();

int main(){
    vetores();
    return 0;
}

void vetores(){

    int tam , vet1[100] , vet2[100] , soma[100];
    printf("Quantos numeros em cada vetor voce quer adicionar: ");
    scanf("%d" , &tam);
    if(tam <= 0){
        printf("Reposta invalida!!\n");
        vetores();
    }

    for(int i = 0 ; i < tam ;i++){
        printf("Digite o valor do vetor 1 na posição [%d]: " , i+1);
        scanf("%d" , &vet1[i]);
    }

    for(int i = 0 ; i < tam ;i++){
        printf("Digite o valor do vetor 2 na posição [%d]: " , i+1);
        scanf("%d" , &vet2[i]);
    }

    for(int i = 0; i < tam ; i++){
        printf("Vetor 1: [%d]\n" , vet1[i]);
    }
    for(int i = 0; i < tam ; i++){
        printf("Vetor 2: [%d]\n" , vet2[i]);
    }

    for(int i = 0; i < tam ; i++){
        soma[i] = vet1[i] + vet2[i];
    }
    
    printf("\nSoma dos vetores:\n");
    for (int i = 0; i < 5; i++) {
        printf("soma[%d] = %d\n", i, soma[i]);
    }
}