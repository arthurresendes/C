#include <stdio.h>

void insertSort(int vetor[] , int tamanho){
    int troca;
    //O i comeca em 1 pois o primeiro elemento do vetor ja esta ordenado , assim o segundo valor vai ser comprado com o primeiro e se for menor ele vai ser colocado na primeira posicao
    for(int i = 1 ; i < tamanho; i++){
        int proximo = i;

        //O proximo -1 é o elemento que esta antes do proximo , ou seja , o elemento que esta a esquerda do proximo
        //Enquanto o proximo for diferente de 0 e o proximo for menor que o elemento a esquerda dele , havera a troca de valores
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

