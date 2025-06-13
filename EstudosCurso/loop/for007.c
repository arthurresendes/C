#include <stdio.h>

int main()
{
    int i, num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    for (i = num; i > 0; i--)
    {
        printf("%d \n", i);
    }
    return 0;
}
