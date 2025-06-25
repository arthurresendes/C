#include <stdio.h>

/*
divide o vetor ate achar o ponto que deseja ser encontrado
 */

int  buscaBinaria(int vetor[] , int chave , int tam){
    int inicio = 0;
    int fim = tam -1;

    while(inicio <= fim){
        int meio = (inicio + fim)/2;

        if(chave == vetor[meio]){
            return meio;
        }

        if(chave < vetor[meio]){
            fim = meio -1;
        }else{
            inicio = meio + 1;
        }
    }
    return 1;
}

int main(){
    int vetor[6] = {1,3,5,8,12,42};

    //Elemento que quermos encontrar
    int chave = 12;

    int ret = buscaBinaria(vetor , chave , 6);


    printf("O elemento %d esta na posicao %d" , chave , ret);
    return 0;
}

