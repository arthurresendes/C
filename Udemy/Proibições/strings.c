#include <stdio.h>

#include <ctype.h>

#include <string.h>

int main()
{

    char entrada[50];

    printf("Digite um número: ");

    fgets(entrada, 50, stdin);

    // Verifica se começa com + ou -

    int i = (entrada[0] == '-' || entrada[0] == '+') ? 1 : 0; // ve se tem negativo ou positivo na entrada

    while (entrada[i] != '\n' && entrada[i] != '\0')
    {

        if (!isdigit(entrada[i]))
        {

            printf("Erro: apenas números são permitidos.\n");

            return 1;
        }

        i++;
    }

    printf("Entrada numérica válida: %s", entrada);

    return 0;