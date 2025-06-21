#include <stdlib.h>

#include <stdio.h>

#define TAM 10

int pilha[TAM] = {0};

int topo = 0;

void listarPilha()
{

    for (int i = 0; i < TAM; i++)
    {

        printf("-");

        printf("%d", pilha[i]);

        printf("-");
    }
}

void push()
{

    int valor;

    printf("Digite um valor: ");

    scanf("%d", &valor);

    if (topo < TAM)

    {

        pilha[topo] = valor;

        topo++;
    }

    else

    {

        printf("Pilha cheia\n");
    }

    listarPilha();
}

void pop()

{

    if (topo > 0)
    {

        topo--;

        pilha[topo] = 0;

        printf("Elemento removido do topo da pilha\n");

        listarPilha();
    }
    else
    {

        printf("Pilha vazia\n");
    }
}

void clear()
{

    for (int i = 0; i < TAM; i++)
    {

        pilha[i] = 0;
    }

    printf("Pilha limpa: %d", pilha[TAM]);
}

void menu()
{

    printf("\n Escolha uma opcao\n");

    printf("[1] - Inserir\n");

    printf("[2] - Excluir\n");

    printf("[3] - Limpar\n");

    printf("[4] - Mostrar\n");

    printf("[0} - Sair\n");

    printf("Digite: ");
}

int main()

{

    int opcao;

    do
    {

        menu();

        scanf("%d", &opcao);

        switch (opcao)
        {

        case 1:

            push();

            break;

        case 2:

            pop();

            break;

        case 3:

            clear();

            break;

        case 4:

            listarPilha();

            break;

        case 0:

            printf("Saindo...");

            return 0;

        default:

            printf("Opcao invalida \n");
        }

    } while (opcao != 0);

    return 0;
}
