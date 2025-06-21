#include <stdio.h>
#include <stdlib.h>

struct st_no {
    int valor;
    struct st_no *prox;
};

typedef struct st_no no;

void inserirValor(no **le) {
    int quantidade;
    printf("Quantos numeros deseja adicionar: ");
    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++) {
        no *novo = (no *)malloc(sizeof(no));
        if (!novo) {
            printf("Sem memoria\n");
            return;
        }
        printf("Informe um valor: ");
        scanf("%d", &novo->valor);
        novo->prox = *le;
        *le = novo;
    }
}

void listar(no *le) {
    no *aux = le;
    printf("Lista: ");
    while (aux != NULL) {
        printf("%d -> ", aux->valor);
        aux = aux->prox;
    }
    printf("NULL\n");
}

int main() {
    no *lista = NULL;

    inserirValor(&lista);
    listar(lista);

    return 0;
}
