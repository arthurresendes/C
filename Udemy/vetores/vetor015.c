#include <string.h>

#include <stdio.h>

int main()

{

    char moedas[5][20] = {"Real", "Dólar", "Euro", "Iene", "Libra"};

    char totalMoedas[200] = "";

    for (int i = 0; i < 5; i++)
    {

        strcat(totalMoedas, moedas[i]); // Concatena strings

        if (i < 4)
        {

            strcat(totalMoedas, ", ");
        }
    }

    printf("Todas as moedas em uma string: %s\n", totalMoedas);

    return 0;
}