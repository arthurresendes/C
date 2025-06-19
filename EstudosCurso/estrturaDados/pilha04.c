#include <stdio.h>
#include <stdlib.h>

int *pilha;
int topo = 0;
int tamanho = 10;

void listarElementos() {
    printf("Pilha: ");
    for (int i = 0; i < topo; i++) {
        printf("[%d] ", pilha[i]);
    }
    printf("\nTopo da pilha: %d\n", topo);
}

void push() {
    if (topo < tamanho) {
        int valor;
        printf("Digite um número: ");
        scanf("%d", &valor);
        pilha[topo] = valor;
        topo++;
        listarElementos();
    } else {
        printf("Pilha cheia! Realoque mais espaço.\n");
    }
}

void pop() {
    if (topo > 0) {
        topo--;
        printf("Elemento removido: %d\n", pilha[topo]);
        listarElementos();
    } else {
        printf("Pilha vazia!\n");
    }
}

void realocarTamanho() {
    int novoTamanho;
    printf("Digite o novo tamanho da pilha: ");
    scanf("%d", &novoTamanho);

    if (novoTamanho > tamanho) {
        int *novaPilha = realloc(pilha, novoTamanho * sizeof(int));
        if (novaPilha == NULL) {
            printf("Erro na realocação de memória.\n");
            return;
        }
        pilha = novaPilha;
        tamanho = novoTamanho;
        printf("Tamanho da pilha aumentado para %d.\n", tamanho);
    } else {
        printf("Novo tamanho deve ser maior que o atual (%d).\n", tamanho);
    }
}

int main() {
    pilha = (int *)malloc(tamanho * sizeof(int));
    if (pilha == NULL) {
        printf("Erro ao alocar memória para a pilha.\n");
        return 1;
    }

    int opcao;
    do {
        printf("\n1 - Push\n2 - Pop\n3 - Listar\n4 - Realocar\n0 - Sair\nOpção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: listarElementos(); break;
            case 4: realocarTamanho(); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    free(pilha);
    return 0;
}
