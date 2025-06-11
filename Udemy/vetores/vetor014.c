#include <string.h>

#include <stdio.h>

int main()

{

    char moedas[5][20];

    strcpy(moedas[0], "Real");

    strcpy(moedas[1], "Dolar");

    strcpy(moedas[2], "Euro");

    strcpy(moedas[3], "Iene");

    strcpy(moedas[4], "Libra");

    for (int i = 0; i < 5; i++)
    {

        printf("%s\n", moedas[i]);
    }

    return 0;
}