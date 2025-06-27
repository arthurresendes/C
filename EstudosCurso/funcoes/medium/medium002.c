#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

int contarVogal(char palavra[]);

int main()

{

    char palavra[100];

    printf("Digite uma palavra: ");

    fgets(palavra, sizeof(palavra), stdin);

    contarVogal(palavra);

    return 0;
}

int contarVogal(char palavra[])
{

    int contador = 0;

    for (int i = 0; palavra[i] != '\0'; i++)
    {

        char vogal = palavra[i];

        vogal = toupper(vogal);

        if (vogal == 'A' || vogal == 'E' || vogal == 'I' || vogal == 'O' || vogal == 'U')
        {

            contador++;
        }
    }

    printf("Sua palavra teve %d vogal(is)", contador);
}