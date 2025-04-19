#include <stdio.h>

int main()
{
    int numero;
    int soma = 0;
    while (1)
    {
        printf("Digite um número positivo: ");
        scanf("%d", &numero);
        if (numero < 0)
        {
            break;
        }
        soma += numero;
    }
    printf("A soma é %d", soma);
    return 0;
}
