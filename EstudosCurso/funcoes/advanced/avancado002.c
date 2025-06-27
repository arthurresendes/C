#include <stdlib.h>

#include <stdio.h>

int teste(int *a, int *b);

int main()

{

    int x = 5, y = 10;

    printf("Valor de A: %d\n Valor de B:%d\n", x, y);

    teste(&x, &y);

    printf("Depois da função:\n");

    printf("Valor de A: %d\nValor de B: %d\n", x, y);

    return 0;
}

int teste(int *a, int *b)
{

    *a = 10;

    *b = 20;
}