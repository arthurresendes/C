#include <stdio.h>
#include <stdlib.h>

#define LINHA 5
#define COLUNA 5

int main(){
    float matriz[LINHA][COLUNA];
    float soma = 0.0;
    float media;

    for(int i = 0 ; i < LINHA; i++){
        for(int j = 0 ; j < COLUNA ; j++){
            printf("Digite o valor da matriz[%d][%d] " , i+1 , j+1);
            scanf("%f" , &matriz[i][j]);
        }
    }

    for(int i = 0 ; i < LINHA; i++){
        for(int j = 0 ; j < COLUNA ; j++){
            soma = soma + matriz[i][j];
        }
    }

    media = soma / 25;

    printf("Soma das matrizes: %.2f , media das matrizes: %.2f" , soma , media);
    
    return 0;
}

