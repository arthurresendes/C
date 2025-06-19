
#include <stdio.h>

int main()
{
    int n1 ;
    printf("Digite o numero para ver a tabuada dele: ");
    scanf("%d" , &n1);
    for (int i = 1; i <= 10; i++)
    {
        printf("Tabuada do %d: %d x %d\n", n1, i, n1 * i);
    }

    return 0;
}
