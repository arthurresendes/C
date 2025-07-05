#include <stdio.h>

void principal();

int main()
{
    principal();
    return 0;
}

void principal()
{
    int proximo = 0;
    int n1[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o numero na posicao [%d]: ", i);
        scanf("%d", &n1[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - 1; j++)
        {
            if (n1[j] > n1[j + 1])
            {
                proximo = n1[j];
                n1[j] = n1[j + 1];
                n1[j + 1] = proximo;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", n1[i]);
    }
}
