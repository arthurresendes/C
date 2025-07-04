#include <stdio.h>

void principal();

int main()
{
    principal();
    return 0;
}

void principal()
{
    int n1, n2, res;
    printf("===========Area Retangulo===========\n");
    printf("Digite a base: ");
    scanf("%d", &n1);
    printf("Digite a altura: ");
    scanf("%d", &n2);
    res = n1 * n2;
    printf("%d * %d = %d\n", n1, n2, res);
}
