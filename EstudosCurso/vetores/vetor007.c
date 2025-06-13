#include <stdio.h>

int main()

{

    int vetorA[6] = {1, 0, 5, -2, -5, 7};

    int soma = vetorA[0] + vetorA[1] + vetorA[5];

    printf("%d", soma);

    vetorA[4] = 100;

    printf("\n %d", vetorA[0]);

    printf("\n %d", vetorA[1]);

    printf("\n %d", vetorA[2]);

    printf("\n %d", vetorA[3]);

    printf("\n %d", vetorA[4]);

    printf("\n %d", vetorA[5]);

    return 0;
}
