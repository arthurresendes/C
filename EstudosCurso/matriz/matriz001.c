#include <stdio.h>
#define LINHA 3
#define COLUNA 3

int main(){
    int matriz[LINHA][COLUNA]={{1,2,3} , {4,5,6} , {7,8,9}};
    int i , j;
    for(i = 0 ; i < LINHA ; i++){
        for(j=0 ; j< COLUNA ; j++){
            printf("%d" , matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}