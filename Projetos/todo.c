#include <stdio.h>
#include <string.h>

#define MAX_TODOS 10
#define TAM_TEXTO 200

char todos[MAX_TODOS][TAM_TEXTO];
int total = 0;

void consultar() {
    if (total == 0) {
        printf("Nenhum to-do cadastrado.\n");
        return;
    }

    printf("=== LISTA DE TO-DOS ===\n");
    for (int i = 0; i < total; i++) {
        printf("[%d]: %s\n", i + 1, todos[i]);
    }
}

void inserir() {
    if (total >= MAX_TODOS) {
        printf("Limite de to-dos atingido!\n");
        return;
    }

    printf("Digite o seu to-do: ");
    fgets(todos[total], sizeof(todos[total]), stdin);
    todos[total][strcspn(todos[total], "\n")] = 0; // Remover '\n'
    total++;
    printf("To-do adicionado com sucesso!\n");
}

void remover() {
    if (total == 0) {
        printf("Nenhum to-do para remover.\n");
        return;
    }

    int indice;
    consultar();

    printf("Digite o número do to-do que deseja remover: ");
    scanf("%d", &indice);
    getchar(); // Limpa o buffer do teclado

    if (indice < 1 || indice > total) {
        printf("Índice inválido!\n");
        return;
    }

    for (int i = indice - 1; i < total - 1; i++) {
        strcpy(todos[i], todos[i + 1]);
    }
    total--;
    printf("To-do removido com sucesso!\n");
}

int main() {
    int opcao;
    do {
        printf("\n=== MENU ===\n");
        printf("1. Inserir To-do\n");
        printf("2. Consultar To-dos\n");
        printf("3. Remover To-do\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar(); // Limpa o \n após scanf

        switch (opcao) {
            case 1:
                inserir();
                break;
            case 2:
                consultar();
                break;
            case 3:
                remover();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 0);

    return 0;
}
