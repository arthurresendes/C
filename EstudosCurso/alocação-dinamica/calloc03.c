#include <stdio.h>

#include <stdlib.h>

int main()

{

    int numeros, *vetor;

    printf("Digite a quantidade de numeros: ");

    scanf("%d", &numeros);

    vetor = (int *)calloc(numeros, sizeof(int));

    if (vetor == NULL)
    {

        printf("Erro ao alocar memoria.\n");

        return 1;
    }

    for (int i = 0; i < numeros; i++)
    {

        printf("Digite o numero %d: ", i + 1);

        scanf("%d", &vetor[i]);
    }

    printf("Numeros digitados:\n");

    for (int i = 0; i < numeros; i++)
    {

        printf("%d ", vetor[i]);
    }

    free(vetor);

    return 0;
}