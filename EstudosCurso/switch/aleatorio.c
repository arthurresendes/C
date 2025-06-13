#include <stdio.h>

int main()
{
    int n1, n2, operacao, opcao;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);
    printf("Escolha a operação que quer fazer : \n");
    printf("MENU \n");
    printf("1 - +  \n");
    printf("2 - -  \n");
    printf("3 - *  \n");
    printf("4 - /  \n");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        operacao = n1 + n2;
        printf("Resultado : %d", operacao);
        break;
    case 2:
        operacao = n1 - n2;
        printf("Resultado : %d", operacao);
        break;
    case 3:
        operacao = n1 * n2;
        printf("Resultado : %d", operacao);
        break;
    case 4:
        operacao = n1 / n2;
        printf("Resultado : %d", operacao);
        break;
    default:
        printf("Nenhuma opção foi selecionada");
    }

    return 0;
}