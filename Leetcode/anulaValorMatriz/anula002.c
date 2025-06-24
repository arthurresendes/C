#include <stdio.h>

#define LINHA 3
#define COLUNA 3

int main()
{
    int matriz[LINHA][COLUNA];
    int numeroLinha;
    int numeroColuna;
    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            printf("Digite o valor para a matriz [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            printf("[%d] ", matriz[i][j]);
        }
        printf("\n");
    }

    do
    {
        printf("\n Digite a linha que esta o numero que quer remover da matriz(0 até 2): ");
        scanf("%d", &numeroLinha);
    } while (numeroLinha < 0 || numeroLinha >= LINHA);

    do
    {
        printf("\n Digite a coluna que esta o numero que quer remover da matriz(0 até 2): ");
        scanf("%d", &numeroColuna);
    } while (numeroColuna < 0 || numeroColuna >= COLUNA);

    matriz[numeroLinha][numeroColuna] = 0;

    printf("Matriz atualizda:\n");

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            printf("[%d] ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}