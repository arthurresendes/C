#include <stdio.h>

#include <stdlib.h>

int main()
{

    int a = 20;

    printf("O valor de a e igual a : %d", a);

    // O & busca o endereco de memoria

    printf("O valor de a e igual a : %d \n", a);

    // Variavel armazena o valor

    // Ponteiro armazenam posicoes na memoria

    int b = 10;

    int *ponteiro;

    // Recebendo a posicao da variavel b

    ponteiro = &b;

    printf("Valor de b: %d \n ", b);

    //* O ponteiro pode ser lido como "Conteudo apontado para"

    *ponteiro = 30;

    printf("Valor de b: %d \n", b);

    return 0;
}