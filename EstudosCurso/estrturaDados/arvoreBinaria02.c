#include <stdio.h>
#include <stdlib.h>

struct st_arvore 
{
    int valor;
    struct st_arvore *sad;
    struct st_arvore *sae;
};

typedef struct st_arvore arvore;

arvore *criarArvore()
{
    return NULL; 
}

int arvoreEstaVazia(arvore *t)
{
    return t == NULL; //Verifica se a arvore é nula
}

void mostraArvore(arvore *t)
{
    printf("<");
    if (!arvoreEstaVazia(t))
    {
        printf("%d", t->valor); // Mostra o valor do no atual
        mostraArvore(t->sae); //Mostra a subarvore a esquerda
        mostraArvore(t->sad);
    }
    printf(">");
}

void insereDadoArvore(arvore **t, int num) //** t é um ponteiro para um ponteiro de arvore
{
    if (*t == NULL)
    {
        *t = (arvore *)malloc(sizeof(arvore));
        (*t)->valor = num;
        (*t)->sae = NULL;
        (*t)->sad = NULL;
    }
    else
    {
        if (num < (*t)->valor)
        {
            insereDadoArvore(&((*t))->sae, num);
        }
        else if (num > (*t)->valor)
        {
            insereDadoArvore(&((*t))->sad, num);
        }
    }
}

int estaNaArvore(arvore *t, int num)
{
    if (arvoreEstaVazia(t))
    {
        return 0;
    }

    return t->valor == num || estaNaArvore(t->sae, num) || estaNaArvore(t->sad, num);
}

int main()
{
    arvore *t = criarArvore();

    insereDadoArvore(&t, 12);
    insereDadoArvore(&t, 15);
    insereDadoArvore(&t, 10);
    insereDadoArvore(&t, 13);

    mostraArvore(t);

    if (arvoreEstaVazia(t))
    {
        printf("\n\nArvore esta vazia\n");
    }
    else
    {
        printf("\n\nArvore nao esta vazia \n");
    }

    if (estaNaArvore(t, 15))
    {
        printf("\n O elemento 15 pertence a arvore\n");
    }
    else
    {
        printf("\n\nO elemento 15 nao pertence a arvore\n");
    }

    if (estaNaArvore(t, 20))
    {
        printf("\n O elemento 15 pertence a arvore\n");
    }
    else
    {
        printf("\n\nO elemento 15 nao pertence a arvore\n");
    }

    liberaArvore(t);
    return 0;
}
