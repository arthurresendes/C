#include <stdio.h>

#define TAMPILHA 100

char letra[TAMPILHA];
int topo = 0;

void listarPilha()
{
    for (int i = 0; i < TAMPILHA; i++)
    {
        printf("%c", letra[i]);
    }
    printf("\n Topo da pilha: %d\n", topo);
}

void push()
{
    char digite;
    printf("Digite uma letra: ");
    scanf(" %c", &digite);
    if (topo < TAMPILHA)
    {
        letra[topo] = digite;
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
        topo--;
        letra[topo] = 0;
        printf("Elemento removido do topo da pilha\n");
        listarPilha();
    }
    else
    {
        printf("Pilha vazia\n");
    }
}

void mostraTexto(){
    printf("Texto na pilha: ");
    for(int i = 0 ; i < topo ; i++){
        printf("%c", letra[i]);
    }
    printf("\n");
}

void clearPilha()
{
    for (int i = 0; i < TAMPILHA; i++)
    {
        letra[i] = 0;
    }
    printf("Pilha limpa\n");
}

int main()
{
    int opcao = 0;
    do
    {
        printf("============Menu==========\n");
        printf("[1] Inserir letra\n");
        printf("[2] Remover letra\n");
        printf("[3] Mostrar letras\n");
        printf("[4] Limpar letras\n");
        printf("[0] Para sair\n");
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
            mostraTexto();
            break;
        case 4:
            clearPilha();
            break;
        case 0:
            printf("Saindo... \n");
            return 0;
        default:
            printf("Opcao invalida , digite novamente!\n");
            break;
        }
    } while (opcao != 0);
    return 0;
}
