#include <string.h>

#include <stdio.h>

struct product
{

    int codigo;

    char nome[50];

    int quantidade;

    float preco;

    float total;
};

int main()

{

    struct product produtos[3];

    float geral = 0;

    for (int i = 0; i < 3; i++)
    {

        printf("Digite o codigo do produto: ");

        scanf("%d", &produtos[i].codigo);

        getchar();

        printf("\n Digite o nome: ");

        fgets(produtos[i].nome, sizeof(produtos[i].nome), stdin);

        printf("\n Digite o preco: ");

        scanf("%f", &produtos[i].preco);

        printf("\n Digite a quantidade: ");

        scanf("%d", &produtos[i].quantidade);

        produtos[i].total = produtos[i].preco * produtos[i].quantidade;

        printf("Total: %.2f x %d = %.2f \n", produtos[i].preco, produtos[i].quantidade, produtos[i].total);

        geral += produtos[i].total;

        getchar();
    }

    printf("%.2f", geral);

    return 0;
}