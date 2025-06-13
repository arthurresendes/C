#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor;
    int i;

    // Aloca dinamicamente um vetor de 5 inteiros
    vetor = (int *) malloc(5 * sizeof(int));

    // Atribui os valores 1, 2, 3, 4, 5
    for(i = 0; i < 5; i++) {
        vetor[i] = i + 1;
    }

    // Imprime os valores
    printf("Valores no vetor:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }

    // Libera a memória
    free(vetor);

    return 0;
}
