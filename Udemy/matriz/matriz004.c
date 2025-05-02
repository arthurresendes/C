#include <stdio.h>

int main()
{
    int matriz[3][3];
    int i, j, soma = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o valor da matriz [i][j]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            soma += matriz[i][j];
        }
    }

    printf("\nA soma de todos os elementos da matriz é: %d\n", soma);
    return 0;
}