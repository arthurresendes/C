#include <stdio.h>

#include <stdlib.h>

#include <time.h>

int main()

{

    srand((unsigned)time(NULL));

    int adivinhe, num;

    num = (rand() % 10) + 1;

    printf("Digite um número: ");

    scanf("%d", &adivinhe);

    while (adivinhe != num)
    {

        if (adivinhe > num)
        {

            printf("Número maior, tente novamente: ");
        }
        else
        {

            printf("Número menor, tente novamente: ");
        }

        scanf("%d", &adivinhe);
    }

    printf("Parabéns, você acertou!\n");

    return 0;
}