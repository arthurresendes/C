#include <stdio.h>

void borda()
{
    printf("-------------------------------- \n");
}

void cardapio()
{
    borda();
    printf("1-File duplo\n");
    printf("2-Alcatra\n");
    printf("3-Picanha\n");
    borda();
}

void perguntaKilo()
{
    printf("Quantos kilos quer: ");
}

int main()
{
    int escolha, kilo;
    float fdPreco, multi, aPreco, pPreco, desconto;
    cardapio();
    do
    {
        printf("Escolha apenas um: ");
        scanf("%d", &escolha);
    } while (escolha > 3 || escolha < 1);

    if (escolha == 1)
    {
        perguntaKilo();
        scanf("%d", &kilo);
        if (kilo >= 5)
        {
            fdPreco = 4.9;
            multi = fdPreco * kilo;
            desconto = multi * 0.05;
        }
        else
        {
            fdPreco = 5.8;
            multi = fdPreco * kilo;
            desconto = multi * 0.05;
        }

        borda();
        printf("Carne escolhia: File Duplo \n");
        printf("Quantidade: %d\n", kilo);
        printf("Preço antes do desconto: %f\n", multi);
        printf("Desconto: %f\n", desconto);
        printf("Preco atualizado: %f\n", multi - desconto);
        borda();
    }
    else if (escolha == 2)
    {
        perguntaKilo();
        scanf("%d", &kilo);
        if (kilo >= 5)
        {
            aPreco = 5.9;
            multi = aPreco * kilo;
            desconto = multi * 0.05;
        }
        else
        {
            aPreco = 6.8;
            multi = aPreco * kilo;
            desconto = multi * 0.05;
        }

        borda();
        printf("Carne escolhia: Alcatra \n");
        printf("Quantidade: %d\n", kilo);
        printf("Preço antes do desconto: %f\n", multi);
        printf("Desconto: %f\n", desconto);
        printf("Preco atualizado: %f\n", multi - desconto);
        borda();
    }
    else
    {
        perguntaKilo();
        scanf("%d", &kilo);
        if (kilo >= 5)
        {
            pPreco = 6.9;
            multi = pPreco * kilo;
            desconto = multi * 0.05;
        }
        else
        {
            pPreco = 7.8;
            multi = pPreco * kilo;
            desconto = multi * 0.05;
        }

        borda();
        printf("Carne escolhia: Picanha \n");
        printf("Quantidade: %d\n", kilo);
        printf("Preço antes do desconto: %f\n", multi);
        printf("Desconto: %f\n", desconto);
        printf("Preco atualizado: %f\n", multi - desconto);
        borda();
    }

    return 0;
}