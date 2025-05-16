#include <stdio.h>

int main()

{

    int i, numero[10], maior, menor;

    for (i = 0; i < 10; i++)
    {

        printf("O numero %d eh: ", i + 1);

        scanf("%d", &numero[i]);
    }

    maior = menor = numero[0];

    for (i = 0; i < 10; i++)
    {

        if (maior < numero[i])
        {

            maior = numero[i];
        }

        if (numero[i] < menor)
        {

            menor = numero[i];
        }
    }

    printf("O maior numero foi: %d", maior);

    printf("\n O menor numero foi: %d", menor);

    return 0;
}