#include <stdio.h>

int main(){
    int matriz[3][2];
    int inversa[2][3];
    int i ,j;
    for(i = 0 ; i < 3 ; i++){
        for(j = 0 ; j < 2 ; j++){
            printf("Digite o valor da matriz [%d][%d]: " , i,j);
            scanf("%d" , &matriz[i][j]);
        }
    }

    printf("\n Matriz normal \n");
    for(i = 0 ; i < 3 ; i++){
        for(j = 0 ; j < 2 ; j++){
            printf("%4d" , matriz[i][j]);
        }
        printf("\n");
    }

    for(i = 0 ; i < 3 ; i++){
        for(j = 0 ; j < 2 ; j++){
            inversa[j][i] = matriz[i][j];
        }
    }

    printf("\n Matriz inversa \n");
    for(i = 0 ; i < 2 ; i++){
        for(j = 0 ; j < 3 ; j++){
            printf("%4d" , inversa[i][j]);
        }
        printf("\n");
    }



    return 0;
}