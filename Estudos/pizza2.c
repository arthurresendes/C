#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void bordaMenu() {
    printf("--------------------- \n");
}

int nomeValido(const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isalpha(str[i]) && str[i] != ' ') {
            return 0; // inválido se não for letra nem espaço
        }
    }
    return 1; // válido
}

int cpfValido(const char *str) {
    if (strlen(str) != 11) return 0; // CPF deve ter exatamente 11 caracteres
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) return 0; // inválido se tiver letras ou símbolos
    }
    return 1; // válido
}

int soNumeros(const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) return 0;
    }
    return 1;
}

int lerInteiroPositivo(const char *mensagem) {
    char buffer[20];
    do {
        printf("%s", mensagem);
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = '\0';
    } while (!soNumeros(buffer));
    return atoi(buffer);
}

int main() {
    int tipoPedido, confirmacao, cardapio, cep, numResidencia, querComplemento;
    char nome[50], CPF[12], logadouro[100], cidade[20], complemento[10];

    printf("Bem-vindo à PizzaControl! Estamos muito felizes de ter você aqui!! \n");

    do {
        tipoPedido = lerInteiroPositivo(" \n 1 para comer no restaurante \n 2 para entrega \n 3 para sair \n Digite sua opção:");
    } while (tipoPedido < 1 || tipoPedido > 3);

    if (tipoPedido == 1) {
        do {
            do {
                printf("\nDigite seu nome: ");
                fgets(nome, sizeof(nome), stdin);
                nome[strcspn(nome, "\n")] = '\0';
            } while (strlen(nome) == 0 || !nomeValido(nome));

            do {
                printf("Digite seu CPF (somente números - 11 dígitos): ");
                fgets(CPF, sizeof(CPF), stdin);
                CPF[strcspn(CPF, "\n")] = '\0';
                if (!cpfValido(CPF)) {
                    printf("CPF inválido! Digite exatamente 11 números.\n");
                }
            } while (!cpfValido(CPF));

            bordaMenu();
            puts(nome);
            puts(CPF);
            bordaMenu();

            confirmacao = lerInteiroPositivo("Confirma essas informações (1--Sim, 2--Não): ");

        } while (confirmacao != 1);

    } else if (tipoPedido == 2) {

        do {
            do {
                printf("Digite seu nome: ");
                fgets(nome, sizeof(nome), stdin);
                nome[strcspn(nome, "\n")] = '\0';
            } while (strlen(nome) == 0 || !nomeValido(nome));

            do {
                printf("Digite seu CPF (somente números - 11 dígitos): ");
                fgets(CPF, sizeof(CPF), stdin);
                CPF[strcspn(CPF, "\n")] = '\0';
                if (!cpfValido(CPF)) {
                    printf("CPF inválido! Digite exatamente 11 números.\n");
                }
            } while (!cpfValido(CPF));

            cep = lerInteiroPositivo("Digite seu CEP: ");

            do {
                printf("Digite o nome da cidade: ");
                fgets(cidade, sizeof(cidade), stdin);
                cidade[strcspn(cidade, "\n")] = '\0';
            } while (strlen(cidade) == 0 || !nomeValido(cidade));

            numResidencia = lerInteiroPositivo("Digite o número da residência: ");

            do {
                printf("Digite o logradouro (nome da rua): ");
                fgets(logadouro, sizeof(logadouro), stdin);
                logadouro[strcspn(logadouro, "\n")] = '\0';
            } while (strlen(logadouro) == 0 || !nomeValido(logadouro));

            querComplemento = lerInteiroPositivo("Deseja complementar com algo? (1--Sim, 2--Não): ");

            if (querComplemento == 1) {
                do {
                    printf("Digite o complemento: ");
                    fgets(complemento, sizeof(complemento), stdin);
                    complemento[strcspn(complemento, "\n")] = '\0';
                } while (strlen(complemento) == 0 || !nomeValido(complemento));
            }

            bordaMenu();
            puts(nome);
            puts(CPF);
            printf("CEP: %d\n", cep);
            puts(cidade);
            printf("Número: %d\n", numResidencia);
            puts(logadouro);
            if (querComplemento == 1) puts(complemento);
            bordaMenu();

            confirmacao = lerInteiroPositivo("Confirma essas informações (1--Sim, 2--Não): ");

        } while (confirmacao != 1);

    } else {
        printf("Obrigado por visitar a PizzaControl! Volte sempre. 🍕\n");
        return 0;
    }

    printf("-----Cardapio------ \n");
    bordaMenu();
    printf("|(1)Pizza salgada| \n");
    printf("|(2)Pizza doce| \n");
    printf("|(3)Bebidas| \n");
    printf("|(4)Sobremesas|\n");
    bordaMenu();

    cardapio = lerInteiroPositivo("Qual das opções a seguir você deseja: ");

    return 0;
}
