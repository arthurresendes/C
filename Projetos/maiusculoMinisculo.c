#include <stdio.h>

#include <ctype.h>

#include <string.h>

int main()

{

    char palavra[200];

    char outra[200];

    printf("Digite uma palavra: ");

    fgets(palavra, sizeof(palavra), stdin);

    for (int i = 0; palavra[i] != '\0'; i++)
    {

        palavra[i] = toupper(palavra[i]); // Transforma em letras maiusculas
    }

    printf("Digite outra palavra: ");

    fgets(outra, sizeof(outra), stdin);

    for (int i = 0; outra[i] != '\0'; i++)
    {

        outra[i] = tolower(outra[i]); // Transforma em letras minusculas
    }

    printf("%s", palavra);

    printf("%s", outra);

    return 0;
}