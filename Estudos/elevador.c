#include <stdio.h>

int main()

{

    int andar, paraOnde, qualAndar, resultadoS, resultadoD;

    printf("Qual andar está: ");

    scanf("%d", &andar);

    printf("Você ira subir ou descer? (1-subir // 2-descer)");

    scanf("%d", &paraOnde);

    while (paraOnde > 2 || paraOnde < 1)
    {

        printf("Digite um valor valido (1-subir // 2-descer)");

        scanf("%d", &paraOnde);
    }

    if (paraOnde == 1)
    {

        printf("Qual andar você vai: ");

        scanf("%d", &qualAndar);

        while (qualAndar > 12 || qualAndar <= andar)
        {

            printf("Algo está errado , digite certo: ");

            scanf("%d", &qualAndar);
        }

        resultadoS = qualAndar - andar;

        if (andar == 0)
        {

            printf("Voce saiu do Terreo subiu %d andares e esta no %d", resultadoS, qualAndar);
        }
        else
        {

            printf("Voce subiu %d andares e esta no %d", resultadoS, qualAndar);
        }
    }
    else
    {

        printf("Qual andar você vai: ");

        scanf("%d", &qualAndar);

        while (qualAndar < 0 || qualAndar >= andar)
        {

            printf("Algo está errado , digite certo: ");

            scanf("%d", &qualAndar);
        }

        resultadoD = andar - qualAndar;

        if (qualAndar == 0)
        {

            printf("Voce desceu %d andares e esta no Terreo", resultadoD);
        }
        else
        {

            printf("Voce desceu %d andares e esta no %d", resultadoD, qualAndar);
        }
    }

    return 0;
}