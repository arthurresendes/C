#include <stdio.h>

#include <string.h>

#define TAM 5

#define MAX 50

int main()
{

    char nomes[TAM][MAX] = {

        "Maria",

        "Joao",

        "Ana",

        "Carlos",

        "Beatriz"

    };

    char temp[MAX];

    // Bubble Sort para ordenar em ordem alfabética

    for (int i = 0; i < TAM - 1; i++)
    {

        for (int j = i + 1; j < TAM; j++)
        {

            if (strcmp(nomes[i], nomes[j]) > 0)
            {

                strcpy(temp, nomes[i]);

                strcpy(nomes[i], nomes[j]);

                strcpy(nomes[j], temp);
            }
        }
    }

    // Exibindo os nomes ordenados

    printf("Nomes em ordem alfabética:\n");

    for (int i = 0; i < TAM; i++)
    {

        printf("%s\n", nomes[i]);
    }

    return 0;
}