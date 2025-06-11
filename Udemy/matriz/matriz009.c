#include <stdio.h>

int main()

{

    char matriz[2][3][50];

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            printf("Digite o time na posicao [%d][%d]: ", i + 1, j + 1);

            scanf(" %[^\n]", matriz[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            printf("Time na posicao [%d][%d] foi : %s\t ", i + 1, j + 1, matriz[i][j]);
        }

        printf("\n");
    }

    return 0;
}