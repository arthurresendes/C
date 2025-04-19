#include <stdio.h>

int main()
{
    int opcao;
    float valor, resultado;
    printf("\n=== CONVERSOR DE UNIDADES ===\n");
    printf("1. Metros para CentC-metros\n");
    printf("2. QuilC4metros para Metros\n");
    printf("3. Graus Celsius para Fahrenheit\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        printf("Digite um valor: ");
        scanf("%f", &valor);
        resultado = valor * 100;
        printf("Resultado : %.3f", resultado);
        break;
    case 2:
        printf("Digite um valor: ");
        scanf("%f", &valor);
        resultado = valor * 1000;
        printf("Resultado : %.3f", resultado);
        break;
    case 3:
        printf("Digite um valor: ");
        scanf("%f", &valor);
        resultado = (valor * 9 / 5) + 32;
        printf("Resultado : %.3f", resultado);
        break;
    default:
        printf("Opcão invalida");
    }

    return 0;
}