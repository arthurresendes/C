#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 200

// Variáveis globais para controlar a lista
char *lista[MAX];
int total = 0;

// Prototipação
void menu();
void listaTarefas();
void cadastra();
void retira();

int main()
{
    menu();
    return 0;
}

void menu()
{
    int opcao;

    do {
        printf("\n====== Bem-vindo =====\n");
        printf("====== To-do List =====\n");
        printf("1 - Cadastrar tarefa\n");
        printf("2 - Listar tarefas\n");
        printf("3 - Remover tarefa\n");
        printf("4 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar(); // limpar buffer

        switch (opcao)
        {
        case 1:
            cadastra();
            break;

        case 2:
            listaTarefas();
            break;

        case 3:
            retira();
            break;

        case 4:
            // Libera toda memória antes de sair
            for (int i = 0; i < total; i++) {
                free(lista[i]);
            }
            printf("Volte sempre!\n");
            exit(0);

        default:
            printf("Opção inválida. Tente novamente.\n");
        }

    } while (1);
}

void cadastra()
{
    if (total >= MAX) {
        printf("Lista cheia!\n");
        return;
    }

    char temp[200];
    printf("Digite a tarefa: ");
    fgets(temp, sizeof(temp), stdin);
    temp[strcspn(temp, "\n")] = '\0'; // Remove o '\n'

    lista[total] = (char *)malloc(strlen(temp) + 1);
    if (lista[total] == NULL) {
        printf("Erro ao alocar memória.\n");
        return;
    }
    strcpy(lista[total], temp);
    total++;

    printf("Tarefa cadastrada com sucesso!\n");
}

void listaTarefas()
{
    printf("\n==== LISTA DE TAREFAS ====\n");
    if (total == 0) {
        printf("Nenhuma tarefa cadastrada.\n");
    }

    for (int i = 0; i < total; i++) {
        printf("[%d] %s\n", i, lista[i]);
    }
}

void retira()
{
    int indice;
    if (total == 0) {
        printf("Não há tarefas para remover.\n");
        return;
    }

    listaTarefas(); // mostrar lista antes
    printf("Digite o índice da tarefa que deseja remover: ");
    scanf("%d", &indice);
    getchar(); // limpar buffer

    if (indice < 0 || indice >= total) {
        printf("Índice inválido.\n");
        return;
    }

    // Liberar memória da tarefa
    free(lista[indice]);

    // Deslocar os ponteiros
    for (int i = indice; i < total - 1; i++) {
        lista[i] = lista[i + 1];
    }

    total--;
    printf("Tarefa removida com sucesso!\n");
}
