#include <stdio.h>

#define LINHA 3

#define COLUNA 3

int main()

{

    int matriz[LINHA][COLUNA];

    int colunaEncremento, linhaEncremento;

    for (int i = 0; i < LINHA; i++)
    {

        for (int j = 0; j < COLUNA; j++)
        {

            printf("Digite o valor da linha [%d] coluna [%d]: ", i + 1, j + 1);

            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < LINHA; i++)
    {

        for (int j = 0; j < COLUNA; j++)
        {

            printf("[%d][%d] = [%d]   ", i + 1, j + 1, matriz[i][j]);
        }

        printf("\n");
    }

    do
    {

        printf("Digite a linha que quer incrementar: ");

        scanf("%d", &linhaEncremento);

        if (linhaEncremento < 1 || linhaEncremento > 3)
        {

            printf("Escolha uma linha valida\n");
        }

    } while (linhaEncremento < 1 || linhaEncremento > 3);

    do
    {

        printf("Digite a coluna que quer incrementar: ");

        scanf("%d", &colunaEncremento);

        if (colunaEncremento < 1 || colunaEncremento > 3)
        {

            printf("Escolha uma coluna valida\n");
        }

    } while (colunaEncremento < 1 || colunaEncremento > 3);

    for (int i = 0; i < linhaEncremento; i++)
    {

        for (int j = 0; j < colunaEncremento; j++)
        {

            matriz[i][j]++;

            printf("Matriz incrementada: ");

            printf("[%d]\n", matriz[i][j]);
        }
    }

    for (int i = 0; i < LINHA; i++)
    {

        for (int j = 0; j < COLUNA; j++)
        {

            printf("[%d][%d] = [%d]   ", i + 1, j + 1, matriz[i][j]);
        }

        printf("\n");
    }

    return 0;
}