#include <stdio.h>

#include <stdlib.h>

void main()
{

    int a = 4, opcao = 3;

    float b = 2.5;

    char c = 'x';

    if (a == 5)
    {

        printf("\n A variavel a = 5");
    }

    if (b == 2.5)
    {

        printf("\n A variavel b = 2.5");
    }

    if (c == 'x')
    {

        printf("\n A variavel c = letra x");
    }

    if (a % 2 == 1)
    {

        printf("\n A variavel a eh impar");
    }
    else
    {

        printf("\n A variavel a eh par");
    }

    if (opcao == 1)
    {

        printf("\nA opcao = 1");
    }
    else if (opcao == 2)
    {

        printf("\nA opcao = 2");
    }
    else
    {

        printf("\nA opcao nao eh igual a 1 e nem 2");
    }

    system("pause");
}