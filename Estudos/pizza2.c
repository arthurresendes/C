#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void bordaMenu() {
    printf("--------------------- \n");
}

int ehNumeroInteiro(const char *str) {  
    for (int i = 0; str[i] != '\0'; i++) { 
        if (!isdigit(str[i])) return 0; 
    }
    return 1; 
}

int ehFloat(const char *str) {
    int ponto = 0;
    if (str[0] == '\0') return 0; 
    for (int i = 0; str[i] != '\0'; i++) { 
        if (str[i] == '.') {
            if (ponto) return 0; 
            ponto = 1;
        } else if (!isdigit(str[i])) {
            return 0;
        }
    }
    return 1;
}

int ehSomenteLetras(const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isalpha(str[i]) && str[i] != ' ') {
            return 0;
        }
    }
    return 1;
}

int lerInteiroPositivo(const char *mensagem) {
    char buffer[20];
    do {
        printf("%s", mensagem);
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = '\0';
    } while (strlen(buffer) == 0 || !ehNumeroInteiro(buffer));
    return atoi(buffer);
}

int main() {
    int tipoPedido, confirmacao, cardapio, cep, numResidencia, querComplemento;
    char nome[50], CPF[20], logadouro[100], cidade[20], complemento[30], buffer[50];

    printf("Bem-vindo à PizzaControl! Estamos muito felizes de ter você aqui!! \n");

    do {
        tipoPedido = lerInteiroPositivo(" \n 1 para comer no restaurante \n 2 para entrega \n 3 para sair \n Digite sua opção: ");
    } while (tipoPedido < 1 || tipoPedido > 3);

    if (tipoPedido == 1 || tipoPedido == 2) {
        do {
            do {
                printf("\nDigite seu nome: ");
                fgets(nome, sizeof(nome), stdin);
                nome[strcspn(nome, "\n")] = '\0';
            } while (!ehSomenteLetras(nome) || strlen(nome) == 0);

            do {
                printf("Digite seu CPF (somente números - 11 dígitos): ");
                fgets(CPF, sizeof(CPF), stdin);
                CPF[strcspn(CPF, "\n")] = '\0';
                if (strlen(CPF) != 11 || !ehNumeroInteiro(CPF)) {
                    printf("CPF inválido! Deve conter exatamente 11 números.\n");
                }
            } while (strlen(CPF) != 11 || !ehNumeroInteiro(CPF) || strlen(nome) == 0);

            if (tipoPedido == 2) {
                cep = lerInteiroPositivo("Digite seu CEP: ");

                do {
                    printf("Digite o nome da cidade: ");
                    fgets(cidade, sizeof(cidade), stdin);
                    cidade[strcspn(cidade, "\n")] = '\0';
                } while (!ehSomenteLetras(cidade) || strlen(cidade) == 0 );

                numResidencia = lerInteiroPositivo("Digite o número da residência: ");

                do {
                    printf("Digite o logradouro (nome da rua): ");
                    fgets(logadouro, sizeof(logadouro), stdin);
                    logadouro[strcspn(logadouro, "\n")] = '\0';
                } while (!ehSomenteLetras(logadouro) || strlen(logadouro) == 0);

                querComplemento = lerInteiroPositivo("Deseja complementar com algo? (1--Sim, 2--Não): ");
                if (querComplemento == 1) {
                    do {
                        printf("Digite o complemento: ");
                        fgets(complemento, sizeof(complemento), stdin);
                        complemento[strcspn(complemento, "\n")] = '\0';
                    } while (!ehSomenteLetras(complemento) || strlen(complemento) == 0);
                }
            }

            bordaMenu();
            puts(nome);
            puts(CPF);
            if (tipoPedido == 2) {
                printf("CEP: %d\n", cep);
                puts(cidade);
                printf("Número: %d\n", numResidencia);
                puts(logadouro);
                if (querComplemento == 1) puts(complemento);
            }
            bordaMenu();

            confirmacao = lerInteiroPositivo("Confirma essas informações (1--Sim, 2--Não): ");

        } while (confirmacao != 1);

        printf("-----Cardápio------ \n");
        bordaMenu();
        printf("|(1)Pizza salgada| \n");
        printf("|(2)Pizza doce| \n");
        printf("|(3)Bebidas| \n");
        printf("|(4)Sobremesas|\n");
        bordaMenu();

        cardapio = lerInteiroPositivo("Qual das opções a seguir você deseja: ");
    } else {
        printf("Obrigado por visitar a PizzaControl! Volte sempre. 🍕\n");
    }

    return 0;
}
