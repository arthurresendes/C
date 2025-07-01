#include <stdio.h>
#include <stdlib.h>

int verifica(int num);

int main()
{

    int n1;
    verifica(n1);
    return 0;
}

int verifica(int num)
{
    printf("Digite um numero para ver s eh par ou impar: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("%d eh numero par", num);
    }
    else
    {
        printf("%d eh numero impar", num);
    }

    int opcao;
    printf("\nQuer testar de novo(1- para testar): ");
    scanf("%d", &opcao);
    if (opcao == 1)
    {
        verifica(num);
    }
    return num;
}