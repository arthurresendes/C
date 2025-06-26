#include <stdio.h>

void preencherVetor(int vetor[], int *tam);

void bubbleSort(int vetor[], int tam);

double achaMediana(int vetor[], int tam);

int main()
{

    int vetor[100]; // tamanho máximo definido

    int tamanho;

    preencherVetor(vetor, &tamanho);

    bubbleSort(vetor, tamanho); // Ordena o vetor

    printf("\nVetor ordenado:\n");

    for (int i = 0; i < tamanho; i++)
    {

        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    double mediana = achaMediana(vetor, tamanho);

    printf("Mediana: %.2f\n", mediana);

    return 0;
}

void preencherVetor(int vetor[], int *tam)
{

    printf("Digite o tamanho do vetor: ");

    scanf("%d", tam);

    for (int i = 0; i < *tam; i++)
    {

        printf("vetor[%d]: ", i);

        scanf("%d", &vetor[i]);
    }
}

void bubbleSort(int vetor[], int tam)
{

    int temp;

    for (int i = 0; i < tam - 1; i++)
    {

        for (int j = 0; j < tam - i - 1; j++)
        {

            if (vetor[j] > vetor[j + 1])
            {

                // troca os elementos

                temp = vetor[j];

                vetor[j] = vetor[j + 1];

                vetor[j + 1] = temp;
            }
        }
    }
}

double achaMediana(int vetor[], int tam)
{

    if (tam % 2 != 0)
    {

        // tamanho ímpar

        return vetor[tam / 2];
    }
    else
    {

        // tamanho par

        return (vetor[(tam / 2) - 1] + vetor[tam / 2]) / 2.0;
    }
}