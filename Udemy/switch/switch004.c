#include <stdio.h>

int main()
{
    int opcao;
    printf("Apartir da escolha irei mostra o mes e a quantidade de dias");
    printf("1-- Janeiro\n");
    printf("2-- Fevereiro\n");
    printf("3-- Marco\n");
    printf("4-- Abril\n");
    printf("5-- Maio\n");
    printf("6-- Junho\n");
    printf("7-- Julho\n");
    printf("8-- Agosto\n");
    printf("9-- Setembro\n");
    printf("10-- Outubro\n");
    printf("11-- Novembro\n");
    printf("12--Dezembro\n");
    scanf("%d" , &opcao);
    
    switch (opcao){
        case 1:
        case 5:
        case 7:
        case 8:
        case 12:
        printf("Esse mes tem 31 dias ");
        break;
        case 3:
        case 4:
        case 6:
        case 9:
        case 11:
        printf("Esse mes tem 30 dias");
        break;
        case 2:
        printf("Esse mes tem 28 dias e 29 em anos bissextos");
        break;
        default: printf("Mes nao selecionado");
    }

    return 0;
}