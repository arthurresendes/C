#include <stdio.h>

int soma(int num)
{

    int contador = 0;

    if (num % 2 == 0)
    {

        contador++;

        printf("Seu numero eh par , voce ganhou %d ponto(s)", contador);
    }
    else
    {

        printf("Seu numero eh impar , voce nao ganhou %d ponto(s)", contador);
    }
}

int main()

{

    int x;

    printf("Digite numero : ");

    scanf("%d", &x);

    soma(x);

    return 0;
}