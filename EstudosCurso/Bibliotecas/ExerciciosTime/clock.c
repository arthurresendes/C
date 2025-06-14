#include <stdio.h>
#include <time.h>

int main() {
    clock_t inicio_t, fim_t;
    double tempo_total;

    inicio_t = clock(); // Marca o tempo de início

    printf("Iniciando o programa, inicio_t = %ld\n", (long)inicio_t);

    // Simula um pequeno processamento
    for (long i = 0; i < 100000000; i++); // Loop vazio só para ocupar tempo

    fim_t = clock(); // Marca o tempo de fim

    printf("Finalizando o programa, fim_t = %ld\n", (long)fim_t);

    tempo_total = (double)(fim_t - inicio_t) / CLOCKS_PER_SEC;

    printf("Tempo total de execucao: %f segundos\n", tempo_total);

    return 0;
}
