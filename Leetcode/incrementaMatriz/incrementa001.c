#include <stdio.h>

int main()

{

    int matriz[1][2];

    int opcao;

    matriz[0][0] = 5;

    matriz[0][1] = 7;

    for (int i = 0; i < 1; i++)
    {

        for (int j = 0; j < 2; j++)
        {

            printf("[%d]", matriz[i][j]);
        }
    }

    printf("\nSelecione onde quer incrementar(1-Numero 1, 2-Numero 2): ");

    scanf("%d", &opcao);

    if (opcao == 1)
    {

        matriz[0][0]++;

        printf("\nMatriz atualizada: [%d][%d]\n", matriz[0][0], matriz[0][1]);
    }
    else
    {

        matriz[0][1]++;

        printf("\nMatriz atualizada: [%d][%d]\n", matriz[0][0], matriz[0][1]);
    }

    return 0;
}