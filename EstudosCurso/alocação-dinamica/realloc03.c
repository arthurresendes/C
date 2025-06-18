#include <stdio.h>

#include <stdlib.h>

int main()

{

    int num = 3, *numeros, qtd;

    numeros = (int *)malloc(num * sizeof(int));

    if (numeros == NULL)
    {

        printf("Erro de alocacao.\n");

        return 1;
    }

    printf("Quantos numeros deseja armazenar? ");

    scanf("%d", &qtd);

    if (qtd > num)
    {

        numeros = (int *)realloc(numeros, qtd * sizeof(int));

        if (numeros == NULL)
        {

            printf("Erro ao realocar memoria.\n");

            return 1;
        }
    }

    for (int i = 0; i < qtd; i++)
    {

        printf("Digite o numero %d: ", i + 1);

        scanf("%d", &numeros[i]);
    }

    printf("Numeros digitados:\n");

    for (int i = 0; i < qtd; i++)
    {

        printf("%d ", numeros[i]);
    }

    free(numeros);

    return 0;
}