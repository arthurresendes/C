#include <stdio.h>

int main()
{
    int a, b, resultado;
    char operacao;
    printf("Digite qual operação quer fazer (+ , - , * , /): ");
    scanf("%s", &operacao);
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    if (operacao == '+')
    {
        resultado = a + b;
        printf("O resultado é: %d", resultado);
    }
    else if (operacao == '-')
    {
        resultado = a - b;
        printf("O resultado é: %d", resultado);
    }
    else if (operacao == '*')
    {
        resultado = a * b;
        printf("O resultado é: %d", resultado);
    }
    else if (operacao == '/')
    {
        resultado = a / b;
        printf("O resultado é: %d", resultado);
    }
    else
        printf("Operação invalida");

    return 0;
}
