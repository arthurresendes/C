#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função que converte uma string com letras em um número baseado no modelo desejado
int letraParaNumero(char *str)
{
    int numero = 0;
    int comprimento = strlen(str);

    for (int i = 0; i < comprimento; i++)
    {
        // Converte a letra para maiúscula
        str[i] = toupper(str[i]);

        // Converte a letra para seu valor no alfabeto (A=1, B=2, ..., Z=26)
        int valor = str[i] - 'A' + 1;

        // "Desloca" os valores conforme a posição da letra na string (base 26)
        numero = numero * 26 + valor;
    }

    return numero;
}

int main()
{
    char str[100];

    // Solicita ao usuário uma string com letras
    printf("Digite uma sequência de letras (A, B, AB, etc.): ");
    scanf("%s", str);

    // Converte e exibe o número correspondente
    int numero = letraParaNumero(str);
    printf("A sequência '%s' corresponde ao número: %d\n", str, numero);

    return 0;
}