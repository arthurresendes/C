#include <stdio.h>

#define TAMANHO_MAX 100 // Defina um tamanho máximo razoável

void bubbleSort(int arr[], int valor)
{

    int temp;

    for (int i = 0; i < valor; i++)
    {

        for (int j = 0; j < valor - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {

                temp = arr[j];

                arr[j] = arr[j + 1];

                arr[j + 1] = temp;
            }
        }
    }
}

void mostra(int arr[], int valor)
{

    for (int i = 0; i < valor; i++)
    {

        printf("%d ", arr[i]);
    }

    printf("\n");
}

int insereValor(int arr[])
{

    int valor;

    printf("Quantos números quer adicionar (máx %d): ", TAMANHO_MAX);

    scanf("%d", &valor);

    if (valor > TAMANHO_MAX)
    {

        printf("Valor excede o limite permitido.\n");

        return 0;
    }

    for (int i = 0; i < valor; i++)
    {

        printf("Digite o valor %d: ", i + 1);

        scanf("%d", &arr[i]);
    }

    return valor; // Retorna a quantidade inserida
}

int main()

{

    int arr[TAMANHO_MAX]; // Array com tamanho fixo

    int valor;

    valor = insereValor(arr); // Captura o número de elementos inseridos

    if (valor > 0)
    {

        printf("Array original: ");

        mostra(arr, valor);

        bubbleSort(arr, valor);

        printf("Array ordenado: ");

        mostra(arr, valor);
    }

    return 0;
}