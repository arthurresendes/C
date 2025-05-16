#include <stdio.h>

#include <math.h>

int main()

{

    int vetorA[10] = {1, 0, 5, -2, -5, 7, 9, 8, 12, 27};

    vetorA[4] = 100;

    int contador = 0;

    for (int i = 0; i < 10; i++)
    {

        printf("\n%d", vetorA[i]);

        if (vetorA[i] % 2 == 0)
        {

            contador++;
        }
    }

    printf("\n Existe %d numeros pares", contador);

    return 0;
}