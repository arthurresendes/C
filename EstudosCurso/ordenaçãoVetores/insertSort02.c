#include <stdio.h>

void insertSort(int vetor[] , int tamanho){
    int troca;

    for(int i = 1 ; i < tamanho ; i++){
        int proximo = i;

    while((proximo != 0) && (vetor[proximo] < vetor[proximo -1])){
        troca = vetor[proximo];
        vetor[proximo] = vetor[proximo -1];
        vetor[proximo - 1] = troca;
        proximo--;
    }
    }
}

int main(){
    int nota[10];


    for(int i = 0 ; i < 10 ; i ++){
        printf("Digite a nota do aluno %d: " , i+1);
        scanf("%d" , &nota[i]);
    }

    insertSort(nota , 10);

    for(int i = 0 ; i < 10 ; i++){
        printf("%d\n" , nota[i]);
    }

    return 0;
}

