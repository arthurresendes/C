#include <stdlib.h>

#include <stdio.h>

typedef struct no
{

    int valor;

    struct no *prox;

} No;

int main()

{

    No *primeiro = malloc(sizeof(No));

    primeiro->valor = 10;

    No *segundo = malloc(sizeof(No));

    segundo->valor = 20;

    primeiro->prox = segundo;

    segundo->prox = NULL;

    printf("Valor: %d\n", primeiro->valor);

    printf("Valor: %d\n", segundo->valor);

    free(primeiro);

    free(segundo);

    return 0;
}