#include <stdio.h>

void principal();

int main()
{
    principal();
    return 0;
}

void principal()
{
    int n1[5], maior, menor;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &n1[i]);
        if (i == 0)
        {
            maior = menor = n1[i];
        }
        else
        {
            if (maior < n1[i])
            {
                maior = n1[i];
            }
            if (menor > n1[i])
            {
                menor = n1[i];
            }
        }
    }

    printf("Numero maior: %d\nNumero menor: %d", maior, menor);
}
