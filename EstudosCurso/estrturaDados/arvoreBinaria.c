/*Arvore binaria:

Sao estrturas de dados que possuem no maximo dois filho por no , podendo ter um filho mais que o outro ou nao tendo nenhum filho.

Sua estrtura em codigo pode ser representado por uma struct que possui um ponteiro para o filho esquerdo e um ponteiro para o filho direito, alem de um valor que representa o no.

*/

#include <stdio.h>
#include <stdlib.h>

struct no{
    int valor;
    struct no *esquerdo;
    struct no *direito;
};


struct no *criarNo(int valor){
    struct no *novoNo = (struct no *)malloc(sizeof(struct no));
    if(novoNo == NULL){
        printf("Erro ao alocar memoria patra o no\n");
        return NULL;
    }
    novoNo->valor = valor;
    novoNo->esquerdo = NULL;
    novoNo->direito = NULL;
    return novoNo;
}

void inserirNo(struct no **raiz, int valor){
    if(*raiz == NULL){
        *raiz = criarNo(valor);
        return;
    }
    if(valor < (*raiz)->valor){
        inserirNo(&((*raiz)->esquerdo) ,valor);
    }else if(valor > (*raiz)->valor){
        inserirNo(&((*raiz)->direito) ,valor);
    }else{
        printf("Valor ja existe na arvore\n");
        return;
    }
}

void preOrdem(struct no *raiz){
    if(raiz == NULL) return;
    printf("%d " , raiz->valor);
    preOrdem(raiz->esquerdo);
    preOrdem(raiz->direito);
}

void emOrdem(struct no *raiz){
    if(raiz == NULL) return;
    emOrdem(raiz->esquerdo);
    printf("%d " , raiz->valor);
    emOrdem(raiz->direito);
}

void posOrdem(struct no *raiz){
    if(raiz == NULL) return;
    posOrdem(raiz->esquerdo);
    posOrdem(raiz->direito);
    printf("%d " , raiz->valor);
}


void liberar(struct no *raiz){
    if(raiz == NULL) return;
    liberar(raiz->esquerdo);
    liberar(raiz->direito);

    free(raiz);
}


int main(){
    struct no *raiz = NULL;

    inserirNo(&raiz, 50);
    inserirNo(&raiz, 30);
    inserirNo(&raiz, 70);
    inserirNo(&raiz, 20);
    inserirNo(&raiz, 40);
    inserirNo(&raiz, 60);
    inserirNo(&raiz, 80);

    printf("\nEm ordem: ");
    emOrdem(raiz);

    printf("\nPre ordem: ");
    preOrdem(raiz);

    printf("\nPos ordem: ");
    posOrdem(raiz);

    liberar(raiz);
    return 0;
}

