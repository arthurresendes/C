#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    while (!(a > 5 && a < 10) || !(b > 5 && b < 10))
    {
        printf("Digite um valor entre 5 e 10: ");
        printf("Digite valor do número 1: ");
        scanf("%d", &a);
        printf("Digite valor do número 2: ");
        scanf("%d", &b);
    }

    printf("A soma é igual a: %d", a + b);
    return 0;
}
