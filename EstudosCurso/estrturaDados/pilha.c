/*Pilhas em C:

Pilhas são estruturas de dados que seguem o princípio LIFO (Last In, First Out), ou seja, o último elemento adicionado é o primeiro a ser removido. Elas são frequentemente usadas em algoritmos de recursão, navegação em histórico de páginas web, entre outros.

push: inserir um elemento no topo da pilha
pop: remover um elemento do topo da pilha


*/

#include <stdio.h>

#define TAMPILHA 10
int pilha[TAMPILHA] = {0};
int topo = 0;

void listarPilha()
{
    for (int i = 0; i < TAMPILHA; i++)
    {
        printf("-");
        printf("%d", pilha[i]);
        printf("-");
    }

    printf("\n Topo da pilha: %d\n", topo);
}

void push()
{
    int val;
    printf("Digite o valor a ser inserido na pilha: ");
    scanf("%d", &val);
    if (topo < TAMPILHA)
    {
        pilha[topo] = val;
        topo++;
        listarPilha();
    }
    else
    {
        printf("Pilha cheia\n");
    }
}

void pop()
{
    if (topo > 0)
    {
        topo--; // primeiro decrementa o topo
        pilha[topo] = 0; // depois zera o valor do topo real
        printf("Elemento removido do topo da pilha\n");
        listarPilha();
    }
    else
    {
        printf("Pilha vazia\n");
    }
}

void clearPilha()
{
    for (int i = 0; i < TAMPILHA; i++)
    {
        pilha[i] = 0;
    }
    printf("Pilha limpa\n");
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
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            listarPilha();
            break;
        case 4:
            clearPilha();
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
