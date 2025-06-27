#include <stdio.h>

int soma(int a, int b)
{

    int junto = a + b;

    printf("%d", junto);
}

int main()

{

    int x, y;

    printf("Digite numero 1: ");

    scanf("%d", &x);

    printf("Digite numero 2: ");

    scanf("%d", &y);

    soma(x, y);

    return 0;
}