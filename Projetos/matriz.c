#include <stdio.h>

int main()
{

    int i, j, numL, numC, opcao, subtracao, soma = 0, multi = 1, divi;

    printf("Quantas linhas voce quer na sua matriz ? ");
    scanf("%d", &numL);
    printf("Quantas colunas voce quer na sua matriz ? ");
    scanf("%d", &numC);
    int matriz[numL][numC];

    for (i = 0; i < numL; i++)
    {
        for (j = 0; j < numC; j++)
        {
            printf("Digite o valor da matriz [%d][%d]:", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < numL; i++)
    {
        for (j = 0; j < numC; j++)
        {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
    int valido = 0;
    while (!valido)
    {
        printf("|Qual operação quer fazer a seguir? |\n");
        printf("1-Adicao\n");
        printf("2-Subtracao\n");
        printf("3-Multiplicacao\n");
        printf("4-Divisao\n");
        scanf("%d", &opcao);

        switch (opcao)
        {

        case 1:
            for (i = 0; i < numL; i++)
            {
                for (j = 0; j < numC; j++)
                {
                    soma += matriz[i][j];
                }
            }

            printf("\n A soma da matriz e: %d", soma);
            valido =1;
            break;
        case 2:
            subtracao = matriz[0][0];
            for (i = 0; i < numL; i++)
            {
                for (j = 0; j < numC; j++)
                {
                    subtracao -= matriz[i][j];
                }
            }

            printf("\n A subtracao da matriz e: %d", subtracao);
            valido =1;
            break;
        case 3:

            for (i = 0; i < numL; i++)
            {
                for (j = 0; j < numC; j++)
                {
                    multi *= matriz[i][j];
                }
            }

            printf("\n A multiplicacao da matriz e: %d", multi);
            valido =1;
            break;
        case 4:
            divi = matriz[0][0];
            for (i = 0; i < numL; i++)
            {
                for (j = 0; j < numC; j++)
                {
                    divi /= matriz[i][j];
                }
            }

            printf("\n A divisao da matriz e: %d", divi);
            valido =1;
            break;

        default:
            printf("Nenhuma opcao valida");
        }
    }
    return 0;
}