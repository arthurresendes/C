#include <stdio.h>

int main() {
    char c;
    FILE *arq;

    // Corrigido o nome do arquivo
    arq = fopen("arquivo01.txt", "r");

    if (arq) {
        while ((c = getc(arq)) != EOF) {
            printf("%c", c);
        }
        fclose(arq);
        printf("\n");
    } else {
        printf("Não achei o arquivo\n");
    }

    return 0;
}

