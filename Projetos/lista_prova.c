#include <stdio.h>

#include <stdlib.h>

int main()

{

    int prova;

    float media;

    float soma = 0.0;

    printf("Quantas provas você tem: ");

    scanf("%d", &prova);

    float quantidadeProva[prova];

    for (int i = 0; i < prova; i++)
    {

        printf("Digite a nota da prova %d: ", i + 1);

        scanf("%f", &quantidadeProva[i]);

        soma += quantidadeProva[i];
    }

    media = soma / prova;

    printf("Sua media é %.2f", media);

    return 0;
}