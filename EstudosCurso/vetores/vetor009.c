#include <stdio.h>

#include <math.h>

int main()

{

    int vetorA[10] = {1, 0, 5, -2, -5, 7, 9, 8, 12, 27};

    vetorA[4] = 100;

    for (int i = 0; i < 10; i++)
    {

        if (vetorA[i] < 0)
        {

            vetorA[i] = 0;
        }
    }

    for (int i = 0; i < 10; i++)
    {

        printf("\n%d", vetorA[i]);
    }

    return 0;
}