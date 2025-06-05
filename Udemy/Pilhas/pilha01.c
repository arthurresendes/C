
#include <stdio.h>
#define TAMANHO 5 // Constante com o TAMANHO de 5

int main()
{
    int pilha[TAMANHO]; // Criação de um inteiro chamado pilha com o tamanho de 5
    int topo = -1;      // Pilha vazia
    int valor;

    for (int i = 0; i < TAMANHO; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valor);
        topo++;
        pilha[topo] = valor;
    }

    for (int i = 0; i < TAMANHO; i++)
    {
        printf("Valor[%d]: %d\n", i + 1, pilha[i]);
    }

    printf("Elemento no topo da pilha %d\n", pilha[topo]);

    return 0;
}