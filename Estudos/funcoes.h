#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int ehNumeroInteiro(const char *str) {  //Uma constante tipo char recebe um str que é um ponteiro 
    for (int i = 0; str[i] != '\0'; i++) { //Laco verifica um por um até chegar no final que seria o '\0' valor nulo
        if (!isdigit(str[i])) return 0; //Se algum caractere não for um dígito numérico, a função retorna 0 (falso), pois a string contém algo além de números
    }
    return 1; //Se nao tiver nenhum numero retorna 1
}

int ehFloat(const char *str) {
    int ponto = 0;
    if (str[0] == '\0') return 0; //Proibi enter sem nada
    for (int i = 0; str[i] != '\0'; i++) { //Vai um por um até chegar no final que seria o '\0' valor nulo
        if (str[i] == '.') { //Permite apenas um ponto decimal
            if (ponto) return 0; 
            ponto = 1;
        } else if (!isdigit(str[i])) {  //Se algum caractere nao for digito retona 0(falso) , isdigit verifica se e numero , como tem ! verifica se nao tem numero
            return 0;
        }
    }
    return 1;
}

int ehSomenteLetras(const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {  //Vai um por um ate chegar no valor final '\0'
        if (!isalpha(str[i]) && str[i] != ' ') {  ///isalpha verifica se é letra e verifica se e espaco
            return 0;
        }
    }
    return 1;
}

int lerInteiroPositivo(const char *mensagem) {
    char buffer[20];  // espaço para guardar o texto que o usuário digita

    do {
        printf("%s", mensagem);  // mostra a mensagem para o usuário

        fgets(buffer, sizeof(buffer), stdin);  // lê a resposta do usuário
        buffer[strcspn(buffer, "\n")] = '\0'; // tira o ENTER do final da resposta

    } while (strlen(buffer) == 0 || !ehNumeroInteiro(buffer));  
    // repete enquanto a resposta estiver vazia ou não for só números

    return atoi(buffer);  // transforma a resposta de texto em número inteiro e retorna
}

