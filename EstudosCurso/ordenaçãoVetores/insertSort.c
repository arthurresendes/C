#include <stdio.h>

void insertSort(int vetor[] , int tamanho){
    int troca;
    for(int i = 1 ; i < tamanho; i++){
        int proximo = i;

        while((proximo != 0) && (vetor[proximo]) < vetor[proximo - 1]){
            troca = vetor[proximo];
            vetor[proximo] =  vetor[proximo - 1];
            vetor[proximo - 1] = troca;
            proximo--;
        }

    }
}

int main(){
    int vetor[6] = {8,3,1,42,12,5};

    insertSort(vetor, 6);

    for(int i = 0 ; i < 6 ; i++){
        printf("%d\n" , vetor[i]);
    }
    return 0;
}

