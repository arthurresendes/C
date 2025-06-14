#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = NULL;      // ponteiro inicialmente nulo
    int qtd = 0;        // quantidade atual de elementos
    int valor;

    printf("Digite números (digite -1 para parar):\n");

    while (1) {
        printf("Digite o valor do número %d: ", qtd + 1);
        scanf("%d", &valor);

        if (valor == -1)  // condição para parar
            break;

        // Realoca para um espaço a mais
        int *temp = realloc(p, (qtd + 1) * sizeof(int));
        if (temp == NULL) {
            printf("Erro ao realocar memória.\n");
            free(p);
            return 1;
        }
        p = temp;

        p[qtd] = valor;  // armazena o valor
        qtd++;
    }

    printf("\nValores digitados:\n");
    for (int i = 0; i < qtd; i++) {
        printf("Número %d vale %d e ocupa %ld bytes em memória\n", i + 1, p[i], sizeof(p[i]));
    }

    printf("Total de memória alocada: %ld bytes\n", qtd * sizeof(int));

    free(p);
    p = NULL;
    return 0;
}
