#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <locale.h>

#ifdef _WIN32
#define LIMPAR_TELA "cls"
#else
#define LIMPAR_TELA "clear"
#endif

#define MAX_ITENS 100

typedef struct {
    char nome[50];
    float preco;
} Item;

typedef struct {
    Item itens[MAX_ITENS];
    int quantidade;
} Carrinho;

int ApenasNumeros(char *str);
int ApenasLetras(char *str);
int CampoVazio(char *str);
void lerStringNaoVazia(char *mensagem, char *destino, int tamanho);
void lerNumericoComTamanho(char *mensagem, char *destino, int tamanhoEsperado);
void adicionarItem(Carrinho *carrinho, char *nome, float preco);
void mostrarCarrinho(Carrinho carrinho);
void menuAdicionarItens(Carrinho *carrinho, int opcao);

int main(void) {
    setlocale(LC_ALL, "");
    int tipo = -1, numero = 0;
    Carrinho carrinho = { .quantidade = 0 };
    char nome[30], entrada[10], cardapio[10], cpf[12], cep[10], cidade[40],
         logradouro[40], complemento[40];

    system(LIMPAR_TELA);
    printf("Bem-Vindo(a) à PizzaControl!\n");

    while (tipo != 0 && tipo != 1) {
        printf("\nEscolha o tipo do pedido:\n");
        printf("(0) Pedido no restaurante\n");
        printf("(1) Pedido para entrega\n");
        printf("(S) Sair\n");
        printf("Digite: ");
        fgets(entrada, sizeof(entrada), stdin);
        entrada[strcspn(entrada, "\n")] = '\0';

        if (strcasecmp(entrada, "S") == 0) {
            printf("Saindo do sistema. Até logo!\n");
            return 0;
        }

        if (CampoVazio(entrada) || !ApenasNumeros(entrada)) {
            printf("Digite apenas 0, 1 ou S.\n");
            continue;
        }

        tipo = atoi(entrada);
        if (tipo != 0 && tipo != 1) {
            printf("Opção inválida! Digite 0 ou 1.\n");
        }
    }

    system(LIMPAR_TELA);

    do {
        lerStringNaoVazia("Digite seu nome: ", nome, sizeof(nome));
        if (!ApenasLetras(nome)) {
            printf("Digite apenas letras.\n");
        }
    } while (!ApenasLetras(nome));

    lerNumericoComTamanho("Digite seu CPF (apenas números): ", cpf, 11);

    if (tipo == 1) {
        lerNumericoComTamanho("Digite seu CEP: ", cep, 8);

        do {
            lerStringNaoVazia("Digite sua Cidade: ", cidade, sizeof(cidade));
            if (!ApenasLetras(cidade)) {
                printf("Digite apenas letras.\n");
            }
        } while (!ApenasLetras(cidade));

        do {
            lerStringNaoVazia("Digite o Logradouro: ", logradouro, sizeof(logradouro));
            if (!ApenasLetras(logradouro)) {
                printf("Digite apenas letras.\n");
            }
        } while (!ApenasLetras(logradouro));

        do {
            printf("Número da Residência (1 a 99999): ");
            if (scanf("%d", &numero) != 1 || numero <= 0 || numero > 99999) {
                printf("Número inválido! Digite um número entre 1 e 99999.\n");
                while (getchar() != '\n');
                numero = 0;
            } else {
                while (getchar() != '\n');
            }
        } while (numero <= 0 || numero > 99999);

        printf("Digite o Complemento (opcional): ");
        fgets(complemento, sizeof(complemento), stdin);
        complemento[strcspn(complemento, "\n")] = '\0';
    }

    do {
        printf("\nEscolha as opções do cardápio:\n");
        printf("(1) Pizzas tradicionais\n");
        printf("(2) Pizzas doces\n");
        printf("(3) Bebidas\n");
        printf("(4) Sobremesas\n");
        printf("(5) Ver pedidos\n");
        printf("(6) Finalizar pedido\n");
        printf("(S) Sair\n");
        printf("Digite: ");
        fgets(cardapio, sizeof(cardapio), stdin);
        cardapio[strcspn(cardapio, "\n")] = '\0';

        if (strcasecmp(cardapio, "S") == 0) {
            printf("Pedido cancelado. Saindo...\n");
            return 0;
        }

        if (!CampoVazio(cardapio) && ApenasNumeros(cardapio)) {
            int opcao = atoi(cardapio);
            switch (opcao) {
                case 1:
                case 2:
                case 3:
                case 4:
                    menuAdicionarItens(&carrinho, opcao);
                    break;
                case 5:
                    mostrarCarrinho(carrinho);
                    break;
                case 6:
                    mostrarCarrinho(carrinho);
                    printf("\nPedido finalizado! Obrigado por comprar conosco.\n");
                    return 0;
                default:
                    printf("Opção inválida.\n");
            }
        } else {
            printf("Entrada inválida. Digite um número de 1 a 6 ou S.\n");
        }

    } while (1);

    return 0;
}

void menuAdicionarItens(Carrinho *carrinho, int opcao) {
    char entrada[10];
    int escolha = 0;
    
    do {
        printf("\nEscolha um item para adicionar ao carrinho:\n");
        switch (opcao) {
            case 1:
                printf("(1) Calabresa - R$ 35.00\n");
                printf("(2) Margherita - R$ 32.00\n");
                break;
            case 2:
                printf("(1) Chocolate - R$ 30.00\n");
                printf("(2) Banana com Canela - R$ 28.00\n");
                break;
            case 3:
                printf("(1) Refrigerante - R$ 7.00\n");
                printf("(2) Suco Natural - R$ 10.00\n");
                break;
            case 4:
                printf("(1) Sorvete - R$ 12.00\n");
                printf("(2) Pudim - R$ 8.00\n");
                break;
        }
        printf("(0) Voltar\n");
        printf("Digite: ");
        
        // Lê a entrada como string
        fgets(entrada, sizeof(entrada), stdin);
        entrada[strcspn(entrada, "\n")] = '\0'; // Remove o \n
        
        // Se o usuário apertar ENTER sem digitar nada, entrada será vazia
        if (CampoVazio(entrada)) {
            printf("Opção inválida! Digite um número.\n");
            continue;
        }
        
        // Se não for número, também inválido
        if (!ApenasNumeros(entrada)) {
            printf("Digite apenas números.\n");
            continue;
        }
        
        escolha = atoi(entrada);
        
        if (escolha == 0) break; // Voltar

        switch (opcao) {
            case 1:
                if (escolha == 1) adicionarItem(carrinho, "Pizza Calabresa", 35.00);
                else if (escolha == 2) adicionarItem(carrinho, "Pizza Margherita", 32.00);
                else printf("Opção inválida! Tente novamente.\n");
                break;
            case 2:
                if (escolha == 1) adicionarItem(carrinho, "Pizza Chocolate", 30.00);
                else if (escolha == 2) adicionarItem(carrinho, "Pizza Banana", 28.00);
                else printf("Opção inválida! Tente novamente.\n");
                break;
            case 3:
                if (escolha == 1) adicionarItem(carrinho, "Refrigerante", 7.00);
                else if (escolha == 2) adicionarItem(carrinho, "Suco Natural", 10.00);
                else printf("Opção inválida! Tente novamente.\n");
                break;
            case 4:
                if (escolha == 1) adicionarItem(carrinho, "Sorvete", 12.00);
                else if (escolha == 2) adicionarItem(carrinho, "Pudim", 8.00);
                else printf("Opção inválida! Tente novamente.\n");
                break;
        }
    } while (1);
}
void adicionarItem(Carrinho *carrinho, char *nome, float preco) {
    if (carrinho->quantidade >= MAX_ITENS) {
        printf("Carrinho cheio!\n");
        return;
    }
    strcpy(carrinho->itens[carrinho->quantidade].nome, nome);
    carrinho->itens[carrinho->quantidade].preco = preco;
    carrinho->quantidade++;
    printf("'%s' adicionado ao carrinho!\n", nome);
}

void mostrarCarrinho(Carrinho carrinho) {
    float total = 0.0;
    if (carrinho.quantidade == 0) {
        printf("\nCarrinho vazio.\n");
        return;
    }

    printf("\n--- Itens no Carrinho ---\n");
    for (int i = 0; i < carrinho.quantidade; i++) {
        printf("%d. %s - R$ %.2f\n", i + 1, carrinho.itens[i].nome, carrinho.itens[i].preco);
        total += carrinho.itens[i].preco;
    }
    printf("Total: R$ %.2f\n", total);
}

// Funções auxiliares de validação
int ApenasNumeros(char *str) {
    for (int i = 0; str[i] != '\0'; i++)
        if (!isdigit((unsigned char)str[i])) return 0;
    return 1;
}

int ApenasLetras(char *str) {
    for (int i = 0; str[i] != '\0'; i++)
        if (!isalpha((unsigned char)str[i]) && str[i] != ' ') return 0;
    return 1;
}

int CampoVazio(char *str) {
    for (int i = 0; str[i] != '\0'; i++)
        if (!isspace((unsigned char)str[i])) return 0;
    return 1;
}

void lerStringNaoVazia(char *mensagem, char *destino, int tamanho) {
    do {
        printf("%s", mensagem);
        fgets(destino, tamanho, stdin);
        destino[strcspn(destino, "\n")] = '\0';
        if (CampoVazio(destino)) {
            printf("Campo obrigatório! Não pode estar vazio.\n");
        }
    } while (CampoVazio(destino));
}

void lerNumericoComTamanho(char *mensagem, char *destino, int tamanhoEsperado) {
    do {
        printf("%s", mensagem);
        fgets(destino, tamanhoEsperado + 2, stdin);
        destino[strcspn(destino, "\n")] = '\0';

        if (!ApenasNumeros(destino) || strlen(destino) != tamanhoEsperado) {
            printf("Digite somente números, (%d dígitos).\n", tamanhoEsperado);
        }
    } while (!ApenasNumeros(destino) || strlen(destino) != tamanhoEsperado);
}