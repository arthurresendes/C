#include <stdio.h>
#include <stdlib.h>

/*Select Sort:
O select sort sempre o menor será passado para a primeira posição do vetor.
*/

void selectSort(int vetor[], int tamanho){
    int menor , troca;
    for(int i = 0; i < tamanho - 1; i++){
        menor = i;
        for(int j = (i + 1); j< tamanho; j++){
            if(vetor[j] < vetor[menor]){
                menor = j;
            }
        }

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

