#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

float mediaVetor(float vetor[], int tam);

int main()

{

    float vetor[100];

    int tam;

    printf("Quantas notas teve na escola: ");

    scanf("%d", &tam);

    float media = mediaVetor(vetor, tam);

    return 0;
}

float mediaVetor(float vetor[], int tam)
{

    float media = 0;

    for (int i = 0; i < tam; i++)
    {

        printf("Digita a nota %d: ", i + 1);

        scanf("%f", &vetor[i]);

        media = media + vetor[i];
    }

    for (int i = 0; i < tam; i++)
    {

        printf("Nota [%d]: %.2f\n ", i + 1, vetor[i]);
    }

    media = media / tam;

    printf("Sua media foi de: %.2f", media);
}