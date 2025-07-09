#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void arquivo();

int main(){
    arquivo();
    return 0;
}

void arquivo(){
    char linha[200];
    FILE *leitura;
    leitura = fopen("teste.txt" , "r");
    
    if (leitura == NULL) {
        printf("Erro ao abrir o arquivo. Verifique se 'teste.txt' existe.\n");
        return;
    }

    printf("Conteúdo de 'teste.txt':\n\n");

    // Lê o arquivo linha por linha
    while (fgets(linha, sizeof(linha), leitura) != NULL) {
        printf("%s", linha);
    }

    fclose(leitura);
}