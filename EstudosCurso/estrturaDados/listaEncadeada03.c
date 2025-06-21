#include <stdlib.h>

#include <stdio.h>

// Struct do nó

typedef struct no
{

    int valor;

    struct no *prox;

} No;

// Inicializa a lista com cabeça

void inicializar(No *le)
{

    le->prox = NULL;
}

// Insere no início da lista

void insereInicio(No *le, int valor)
{

    No *novo = malloc(sizeof(No));

    if (novo == NULL)
    {

        printf("Erro de alocação.\n");

        exit(1);
    }

    novo->valor = valor;

    novo->prox = le->prox;

    le->prox = novo;
}

// Exibe todos os valores da lista

void exibir(No *le)
{

    if (le->prox == NULL)
    {

        printf("Lista vazia.\n");

        return;
    }

    No *tmp = le->prox;

    printf("Lista: ");

    while (tmp != NULL)
    {

        printf("%d -> ", tmp->valor);

        tmp = tmp->prox;
    }

    printf("NULL\n");
}

int main()
{

    No *le = malloc(sizeof(No)); // nó cabeça

    if (le == NULL)
    {

        printf("Erro de alocação.\n");

        return 1;
    }

    inicializar(le);

    for (int i = 0; i < 3; i++)
    {

        int valor;

        printf("Digite o valor %d: ", i + 1);

        scanf("%d", &valor);

        insereInicio(le, valor);
    }

    exibir(le);

    // Libera a memória (boa prática)

    No *atual = le->prox;

    while (atual != NULL)
    {

        No *prox = atual->prox;

        free(atual);

        atual = prox;
    }

    free(le);

    return 0;
}
