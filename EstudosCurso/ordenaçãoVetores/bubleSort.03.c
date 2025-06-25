#include <stdio.h>

void bubbleSort(int arr[])
{

    int temp;

    for (int i = 0; i < 6; i++)
    {

        for (int j = 0; j < 6 - 1; j++)
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

void mostra(int arr[])
{

    for (int i = 0; i < 6; i++)
    {

        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main()

{

    int arr[] = {64, 34, 25, 12, 22, 11, 90};

    mostra(arr);

    bubbleSort(arr);

    mostra(arr);

    return 0;
}