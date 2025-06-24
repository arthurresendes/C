#include <stdio.h>

int main()
{
    int matriz[1][4];
    int numero;
    matriz[0][0] = 2;
    matriz[0][1] = 3;
    matriz[0][2] = 4;
    matriz[0][3] = 5;
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("[%d] ", matriz[i][j]);
        }
    }

    do
    {
        printf("\nDeseja remover qual numero da matriz: ");
        scanf("%d", &numero);
    } while (numero != 5 && numero != 4 && numero != 3 && numero != 2);

    if (numero == 2)
    {
        matriz[0][0] = 0;
    }
    else if (numero == 3)
    {
        matriz[0][1] = 0;
    }
    else if (numero == 4)
    {
        matriz[0][2] = 0;
    }
    else
    {
        matriz[0][3] = 0;
    }

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("[%d] ", matriz[i][j]);
        }
    }

    return 0;
}