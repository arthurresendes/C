#include <stdio.h>

#include <math.h>

int main()

{

    int n1;

    int n2;

    printf("N1: ");

    scanf("%d", &n1);

    printf("N2: ");

    scanf("%d", &n2);

    printf("\n N1:%d , N2:%d", n1, n2);

    if (&n1 > &n2)
    {

        printf("\n Ponteiro de N1 eh maior %p", (void *)&n1);

        printf("\n Conteúdo no maior endereço: %d\n", n1);
    }
    else
    {

        printf("\n Ponteiro de N2 eh maior %p", (void *)&n2);

        printf("\n Conteúdo no maior endereço: %d\n", n2);
    }

    return 0;
}
