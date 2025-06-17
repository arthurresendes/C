#include <stdio.h>

void contagem(int contador) {
    if (contador == 5) {
        printf("Você é o assassino\n");
    } else if (contador == 3 || contador == 4) {
        printf("Você é cúmplice\n");
    } else if (contador == 2) {
        printf("Você é suspeita\n");
    } else {
        printf("Obrigado pela colaboração\n");
    }
}

void perguntas(int *contador) {
    int resposta;

    printf("Telefonou para a vítima? (1-Sim | 2-Não): ");
    scanf("%d", &resposta);
    if (resposta == 1) (*contador)++;

    printf("Esteve no local do crime? (1-Sim | 2-Não): ");
    scanf("%d", &resposta);
    if (resposta == 1) (*contador)++;

    printf("Mora perto da vítima? (1-Sim | 2-Não): ");
    scanf("%d", &resposta);
    if (resposta == 1) (*contador)++;

    printf("Devia para a vítima? (1-Sim | 2-Não): ");
    scanf("%d", &resposta);
    if (resposta == 1) (*contador)++;

    printf("Já trabalhou com a vítima? (1-Sim | 2-Não): ");
    scanf("%d", &resposta);
    if (resposta == 1) (*contador)++;
}

int main() {
    int contador = 0;

    printf("Vamos nos ajudar a desenvolver o caso do crime\n");

    perguntas(&contador);  
    contagem(contador);    

    return 0;
}