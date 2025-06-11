#include <stdio.h>

int main()

{

    char futebol[4][20] = {"Sao Paulo", "Palmeiras", "Santos", "Corinthians"};

    int escolha;

    do
    {

        printf("Escolha um numero de 1 a 4 para saber qual time paulista voce gosta: ");

        scanf("%d", &escolha);

    } while (escolha > 4 || escolha < 1);

    if (escolha == 1)
    {

        printf("Time escolhido foi o %s", futebol[0]);
    }
    else if (escolha == 2)
    {

        printf("Time escolhido foi o %s", futebol[1]);
    }
    else if (escolha == 3)
    {

        printf("Time escolhido foi o %s", futebol[2]);
    }
    else
    {

        printf("Time escolhido foi o %s", futebol[3]);
    }

    return 0;
}