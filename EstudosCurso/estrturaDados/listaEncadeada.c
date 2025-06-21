/*Lista encadeada



A lista encadeada possui alem do seu valor , um ponteiro apontando pro proximo elemento



*/

#include <stdio.h> //Output e input

#include <stdlib.h> //malloc

// estrutura para armazenar o valor que sera adicionado ou no inicio ou no fim e uma struct st_no que aponta pro prox(proximo)

struct st_no
{

    int valor;

    struct st_no *prox;
};

// st_no agora se chama no

typedef struct st_no no;

// struct no aponta para le(lista encadeada) , se o proximo da le for NULL(nulo) retorna 1 , se nao retorna 0

int vazia(no *le)
{

    if (le->prox == NULL)
    {

        return 1;
    }
    else
    {

        return 0;
    }
}

// Inicia o programa , fazendo o prox ser igual a NULL

void inicia(no *le)
{

    le->prox = NULL;
}

// Se a le for diferente de vazia , criamos um ponteiro proxNo e atual, atual vai ser receber a le apontando pro prox e vai fzr um loop se atual for diferente de NULL

void libera(no *le)
{

    if (!vazia(le))
    {

        no *proxNo, *atual;

        atual = le->prox;

        while (atual != NULL)
        {

            proxNo = atual->prox;

            free(atual);

            atual = proxNo;
        }
    }
}

// Se a lista estiver vazia ira retornar um printf lista vazia , se nao criamos um ponteiro tmp(tempo) que recebe le que aponta para o prox

void exibir(no *le)
{

    if (vazia(le))
    {

        printf("Lista vazia\n\n");

        return;
    }

    no *tmp;

    tmp = le->prox;

    while (tmp != NULL)
    { // Duvida

        printf("%d", tmp->valor);

        tmp = tmp->prox;
    }

    printf("\n\n");
}

void insereInicio(no *le)
{

    no *novo = (no *)malloc(sizeof(no));

    if (!novo)
    {

        printf("Sem memoria disponivel\n");

        exit(1);
    }

    printf("Informe o valor: ");

    scanf("%d", &novo->valor);

    // Duvida

    no *oldhead = le->prox;

    le->prox = novo;

    novo->prox = oldhead;
}

void insereFim(no *le)
{

    no *novo = (no *)malloc(sizeof(no));

    if (!novo)
    {

        printf("Sem memoria disponivel\n");

        exit(1);
    }

    printf("Informe o valor: ");

    scanf("%d", &novo->valor);

    // Duvida

    novo->prox = NULL;

    if (vazia(le))
    {

        le->prox = novo;
    }
    else
    {

        no *tmp = le->prox;

        while (tmp->prox != NULL)
        {

            tmp = tmp->prox;
        }

        tmp->prox = novo;
    }
}

void opcao(no *le, int op)
{

    switch (op)
    {

    case 0:

        libera(le);

        break;

    case 1:

        exibir(le);

        break;

    case 2:

        insereInicio(le);

        break;

    case 3:

        insereFim(le);

        break;

    case 4:

        inicia(le);

        break;

    default:

        printf("Opcao invalida");

        break;
    }
}

int menu()
{

    int opt;

    printf("Escolha uma opção: \n");

    printf("[0] - Sair\n");

    printf("[1] - Exibir\n");

    printf("[2] - Adicionar no no inicio\n");

    printf("[3] - Adicionar no no fim\n");

    printf("[4] - Zerar\n");

    printf("Opcao: ");

    scanf("%d", &opt);

    return opt;
}

int main()

{

    no *le = (no *)malloc(sizeof(no));

    if (!le)
    {

        printf("Sem memoria disponivel\n");

        exit(1);
    }

    inicia(le);

    int opt;

    do
    {

        opt = menu();

        opcao(le, opt);

    } while (opt);

    free(le);

    return 0;
}
