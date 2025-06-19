// Fila:
/*
Primeiro que entra é o primeiro que sai , como se fosse uma fila de supermercado.

enqueue: inserir um elemento na fila
dequeue: remove um elemento da fila
clear: limpa a fila
head: indica quem é o primerio elemento da fila
tail: cauda da fila(indica quantos elementos tem na fila)

*/

#include <stdio.h>
#define TAMFILA 10 //Constante que define o tamanho da fila
int fila[TAMFILA] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; //Valores da fila tudo zerado
int head = 0; //Comeco da fila
int tall = 0; //Calda da fila(quantos elemento foram adicionados na fila)

void listaElementos()
{
    printf("============Fila atual==========\n");
    for (int i = 0; i < TAMFILA; i++)
    {
        printf("-");
        printf("|%d|", fila[i]);
        printf("-");
    }
    printf("\nHead: %d\n", head);
    printf("Tail: %d\n", tall);
}

void enqueue()
{
    int val;
    if (tall < TAMFILA) //Se o tamanho da fila for menor que o numero de elementos adicionados , uma condicao é aberta
    {
        printf("Digite o valor a ser inserido na fila: ");
        scanf("%d", &val);
        fila[tall] = val; //Adiciona o valor na fila na posicao tail
        tall++; //Incrementa o tamanho da fila
        listaElementos(); 
    }
    else
    {
        printf("Fila cheia!\n");
    }
}

void dequeue()
{
    if (head < tall) //Se o head for menor que o tamanho da fila, significa que ainda existem elementos na fila
    {
        printf("Removendo elemento: %d\n", fila[head]);
        for (int i = head; i < tall; i++)//Percorre a fila a partir do head
        {
            fila[i] = fila[i + 1]; //Move os elementos para a esquerda , sobrescrevendo o elemento removido
        }
        tall--; //Remove o ultimo elemento da fila
        listaElementos();
    }
    else
    {
        printf("Fila vazia!\n");
    }
}

void clear()
{
    for (int i = 0; i < TAMFILA; i++)
    {
        fila[i] = 0;
    }
    head = 0;
    tall = 0;
    printf("Fila limpa!\n");
}

int main()
{

    int opcao = 0;
    do
    {
        printf("============Menu==========\n");
        printf("[1] Inserir elementos\n");
        printf("[2] Remover elementos\n");
        printf("[3] Listar elementos\n");
        printf("[4] Limpar elementos\n");
        printf("[-1] Para sair\n");
        printf("=========================\n");
        printf("Digite a opcao: ");
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
            listaElementos();
            break;
        case 4:
            clear();
            break;
        case -1:
            printf("Saindo... \n");
            return 0;
        default:
            printf("Opcao invalida , digite novamente!\n");
            break;
        }
    } while (opcao != -1);
    return 0;
}
