#include <stdio.h>

int main()
{
    int matriz[2][2];
    int soma = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Digite um numero[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("%d", soma);

    return 0;
}