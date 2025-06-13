#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LINHA 2
#define COLUNA 2

int main()
{
    setlocale(LC_ALL, "");
    int matriz[LINHA][COLUNA];
    int i, j, aux1, aux2;

    for (i = 0; i < LINHA; i++)
    {
        for (j = 0; j < COLUNA; j++)
        {
            printf("Digite o valor da matriz [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < LINHA; i++)
    {
        for (j = 0; j < COLUNA; j++)
        {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    // Auxiliares
    aux1 = matriz[0][0];
    aux2 = matriz[0][1];

    // Invertendo valores usando auxiliares
    matriz[0][0] = matriz[1][0];
    matriz[0][1] = matriz[1][1];
    matriz[1][0] = aux1;
    matriz[1][1] = aux2;

    // Imprimindo nova matriz
    printf("/Matriz inversa / \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}