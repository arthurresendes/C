#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho = 2, *p, qtd;

    p = (int *)malloc(tamanho * sizeof(int));
    if (p == NULL)
    {
        printf("Erro ao alocar memoria.\n");
        return 1; // Retorna um código de erro se a alocação falhar
    }

    printf("Quantos numeros quer adicionar: ");
    scanf("%d", &qtd);

    if (qtd > tamanho)
    {
        p = (int *)realloc(p, qtd * sizeof(int));
        if (p == NULL)
        {
            printf("Erro ao alocar memoria.\n");
            return 1; // Retorna um código de erro se a alocação falhar
        }
    }

    for (int i = 0; i < qtd; i++)
    {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &p[i]);
    }
    printf("Numeros digitados:\n");
    for (int i = 0; i < qtd; i++)
    {
        printf("%d ", p[i]);
    }

    free(p);

    return 0;
}
