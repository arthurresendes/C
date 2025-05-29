#include <stdio.h>

int main()
{
    float numero[5];
    float maior;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite cinco numeros: ");
        scanf("%f", &numero[i]);
    }

    maior = numero[0];

    for (int i = 0; i < 5; i++)
    {
        if (maior < numero[i])
        {
            maior = numero[i];
        }
    }

    printf("%.3f", maior);
    return 0;
}
