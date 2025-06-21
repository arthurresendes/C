#include <stdio.h>
#include <string.h>

#define TAM 5
#define MAX_NOME 100

void bubbleSort(char nomes[][MAX_NOME] , int tamanho){
    char temp[MAX_NOME];

    for(int i = 0 ; i < tamanho ; i++){
        for(int j = 0; j < tamanho - 1; j++){
             // strcmp retorna > 0 se nomes[j] vier depois de nomes[j+1]
                if (strcmp(nomes[j], nomes[j + 1]) > 0) {
                // troca os nomes de posição
                strcpy(temp, nomes[j]);
                strcpy(nomes[j], nomes[j + 1]);
                strcpy(nomes[j + 1], temp);
            }
        }
    }
}

int main(){
    char nomes[TAM][MAX_NOME];

    for(int i = 0 ; i < TAM ; i++){
        printf("Digiten o nome da pessoa %d: " , i+1);
        fgets(nomes[i], sizeof(nomes[i]) , stdin);
        nomes[i][strcspn(nomes[i] , "\n")] = 0;
    }

    bubbleSort(nomes, TAM);

    for(int i = 0 ; i < TAM ; i++){
        printf("%s\n" , nomes[i]);
    }
    return 0;
}

