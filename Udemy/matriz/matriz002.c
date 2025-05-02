#include <stdio.h>
#define LINHA 3
#define COLUNA 3

int main(){
    int matriz[LINHA][COLUNA];
    int i , j;
    /*Usuario digita valor da matriz */
    for(i = 0 ; i < LINHA ; i++){
        for(j = 0 ; j < COLUNA ; j++){
            printf("Digite os valores da matriz: ");
            scanf("%d" , &matriz[i][j]);
        }
    }



    /*Imprime os valores*/
    for(i = 0 ; i < LINHA ; i++){
        for(j=0 ; j< COLUNA ; j++){
            printf("%d" , matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}