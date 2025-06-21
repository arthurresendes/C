#include <stdlib.h>

#include <stdio.h>

#define TAM 10

int fila[TAM] = {0};

int head = 0;

int tail = 0;

void listarFila()
{

    for (int i = 0; i < TAM; i++)
    {

        printf("-");

        printf("%d", fila[i]);

        printf("-");
    }
}

void enqueue()
{

    int valor;

    if (tail < TAM)
    {

        printf("Digite um valor a fila: ");

        scanf("%d", &valor);

        fila[tail] = valor;

        tail++;

        listarFila();
    }
    else
    {

        printf("Fila cheia");
    }
}

void dequeue()

{

    if (tail > head)
    {

        for (int i = head; i < tail; i++)
        {

            fila[i] = fila[i + 1]; // Move os elementos para a esquerda , sobrescrevendo o elemento removido
        }

        fila[tail - 1] = 0;

        tail--;

        listarFila();
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

        fila[i] = 0;
    }

    tail = 0;

    printf("Fila limpa: %d", fila[TAM]);
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

            enqueue();

            break;

        case 2:

            dequeue();

            break;

        case 3:

            clear();

            break;

        case 4:

            listarFila();

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
