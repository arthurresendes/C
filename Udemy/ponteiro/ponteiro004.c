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

    int* p1;
    int* p2;
    p1 = &n1;
    p2 = &n2;
    int* resul;
    resul = p1-p2;

    if (p1 > p2)
    {

        printf("\n Ponteiro de N1 eh maior %p", p1);

        printf("\n Conteúdo no maior endereço: %p\n", p1);
    }
    else
    {

        printf("\n Ponteiro de N2 eh maior %p", p2);

        printf("\n Conteúdo no maior endereço: %p\n", p2);
    }
    printf("\n A diferença entre eles foram de %p - %p = %p" , p1 , p2 , resul);

    return 0;
}
