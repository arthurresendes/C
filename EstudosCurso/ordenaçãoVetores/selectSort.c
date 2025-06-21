#include <stdio.h>
#include <stdlib.h>

/*Select Sort:
O select sort sempre o menor será passado para a primeira posição do vetor.
*/

void selectSort(int vetor[], int tamanho){
    int menor , troca;
    for(int i = 0; i < tamanho - 1; i++){ //tamanho - 1 pois o vettor comeca do 0
        menor = i; //menor recebe o valor do i , o primeiro elemento do vetor
        for(int j = (i + 1); j< tamanho; j++){ //j comeca no i + 1 , ou seja, o segundo elemento do vetor
            //se o elemento posicao j for menor que o vetor da posicao menor que é igual a i(primeiro elemento) menor vai ser igual a j           
            if(vetor[j] < vetor[menor]){
                menor = j;
            }
        }

        //se i for diferente do menor , troca vai receber o valor do vetor na posicao i , o vetor i  vai receber a posicao menor e a posição 'menor' recebe o valor antigo de 'vetor[i]' (que estava salvo em 'troca')

        if(i != menor){
            troca = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = troca;
        }
    }

}

int main(){
    int vetor[6] = {8,3,1,42,12,5};

    selectSort(vetor, 6);

    for(int i = 0 ; i < 6 ; i++){
        printf("%d\n" , vetor[i]);
    }
    return 0;
}

