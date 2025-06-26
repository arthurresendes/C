#include <stdio.h>

void bubbleSort(int vetor[])
{

    int temp;

    for (int i = 0; i < 6; i++)
    {

        for (int j = 0; j < 6 - 1; j++)
        {

            if (vetor[j] > vetor[j + 1])
            {

                temp = vetor[j];

                vetor[j] = vetor[j + 1];

                vetor[j + 1] = temp;
            }
        }
    }
}

void mostra(int vetor[])
{

    for (int i = 0; i < 6; i++)
    {

        printf("%d ", vetor[i]);
    }

    printf("\n");
}

int main()

{

    int vetor[] = {};

    mostra(vetor);

    bubbleSort(vetor);

    mostra(vetor);

    return 0;
}
