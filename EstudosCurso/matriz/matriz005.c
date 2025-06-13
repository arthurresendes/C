#include <stdio.h>
#define LINHA 4
#define COLUNA 4

int main(){
    int matriz[LINHA][COLUNA];
    int i , j;
    
    for (i = 0; i < LINHA; i++)
    {
        for (j = 0; j < COLUNA; j++)
        {
            printf("Digite o valor da matriz [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nOs valores da diagonal principal são:\n");
    for (i = 0; i < LINHA; i++) {
        printf("%4d ", matriz[i][i]);  // Elementos onde i == j , fazem aparecer elementos como [0][0],[1][1],etc.
    }
    printf("\n");

    return 0;
}