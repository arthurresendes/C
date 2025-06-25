#include <stdio.h>

int  buscaLinear(int vetor[] , int chave , int tam){
    for(int i =0 ;i < tam ; i++){
        if(vetor[i] == chave){
            return i;
        }
    }
    return -1;
}

int main(){
    int vetor[6] = {1,3,5,8,12,42};

    //Elemento que quermos encontrar
    int chave = 5;

    int ret = buscaLinear(vetor , chave , 6);


    printf("O elemento %d esta na posicao %d" , chave , ret);
    return 0;
}

