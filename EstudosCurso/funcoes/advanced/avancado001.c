#include <stdlib.h>

#include <stdio.h>

int fatorial(int n);

int main()

{

    int num;

    printf("Digite numero para ver ele fatorial: ");

    scanf("%d", &num);

    int resultado = fatorial(num);

    return 0;
}

int fatorial(int n)
{

    int f = 1;

    if (n <= 0)
    {

        printf("Numero invalido");

        return -1;
    }
    else
    {

        for (int i = 1; i <= n; i++)
        {

            f = f * i;
        }

        printf("%d", f);

        return f;
    }
}