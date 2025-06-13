#include <stdio.h>

int main()
{
    int valores[5];
    int *p1;
    for (int i = 0; i < 5; i++)
    {
        printf("\n Digite o valor de [%d]:  ", i + 1);
        scanf("%d", &valores[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        p1 = &valores[i];
        printf("Valor atual: %d\n", *p1);

        if (i < 5)
        {
            printf("Próximo valor: %d\n", (*p1) *2); //Ponteiro multiplicando
        }
        else
        {
            printf("Não há próximo valor (fim do vetor).\n");
        }
        printf("\n");
    }

return 0;
}
