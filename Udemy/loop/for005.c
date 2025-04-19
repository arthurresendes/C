
#include <stdio.h>

int main()
{
    int num, i;
    printf("Digite um número: ");
    scanf("%d", &num);
    for (i = 0; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            printf("Números pares são: %d \n", i);
        }
    }

    return 0;
}
