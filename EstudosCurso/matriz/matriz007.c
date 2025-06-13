#include <stdio.h>

int main()
{
    int matriz[3][3];
    int i, j, multiplicacao = 1 ;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o valor da matriz [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            multiplicacao *= matriz[i][j];
        }
    }

    printf("\nA multiplicacao de todos os elementos da matriz é: %d\n", multiplicacao);
    return 0;
}