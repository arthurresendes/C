#include <stdio.h>

int main() {
    FILE *arquivo;
    char c;

    // a) Cria/abre o arquivo para escrita
    arquivo = fopen("arq.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }

    printf("Digite caracteres para gravar no arquivo (digite '0' para parar):\n");

    // b) Grava caracteres até o usuário digitar '0'
    do {
        c = getchar();
        if (c != '0' && c != '\n') {  // evita gravar o '0' e pula o Enter
            fputc(c, arquivo);
        }
    } while (c != '0');

    // c) Fecha o arquivo
    fclose(arquivo);

    // d) Abre o arquivo para leitura
    arquivo = fopen("arq.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }

    printf("Conteúdo do arquivo:\n");

    // Lê caractere por caractere até o fim do arquivo e imprime na tela
    while ((c = fgetc(arquivo)) != EOF) {
        putchar(c);
    }

    // Fecha o arquivo
    fclose(arquivo);

    return 0;
}
