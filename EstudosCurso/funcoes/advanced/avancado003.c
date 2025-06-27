#include <stdlib.h>

#include <stdio.h>

float calculadora(float a, float b, char operador);

int main()

{

    float num1, num2;

    char operador;

    printf("Digite valor de n1: ");

    scanf("%f", &num1);

    printf("Digite valor de n2: ");

    scanf("%f", &num2);

    getchar();

    printf("Escolha um operador(+, - , * , /): ");

    scanf("%c", &operador);

    calculadora(num1, num2, operador);

    return 0;
}

float calculadora(float a, float b, char operador)
{

    float result;

    switch (operador)
    {

    case '+':

        result = a + b;

        printf("Resultado: %.2f", result);

        break;

    case '-':

        result = a - b;

        printf("Resultado: %.2f", result);

        break;

    case '*':

        result = a * b;

        printf("Resultado: %.2f", result);

        break;

    case '/':

        result = a / b;

        printf("Resultado: %.2f", result);

        break;

    default:

        printf("Opcao invalida");

        break;
    }

    return result;
}