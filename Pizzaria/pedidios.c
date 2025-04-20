#include <stdio.h>
#include <string.h> 

int main() {
    int menu, pedido, escolhaPizza, escolhaBebida, quantidadePizza , querBebida , pagamento;
    char email[50];
    char nomePizza[50];
    char nomeBebida[50];
    char nomePagamento[50];
    char senha[50];
    char confirmas[50];

    printf("----------------- \n");
    printf("| 1-Cadastro    | \n");
    printf("| 2-Login       | \n");
    printf("| 3-Sair        | \n");
    printf("----------------- \n");
    scanf("%d", &menu);

    switch(menu) {
        case 1:
            do {
                printf("Digite seu e-mail: ");
                scanf("%s", email);

                printf("Digite sua senha: ");
                scanf("%s", senha);

                printf("Confirme sua senha: ");
                scanf("%s", confirmas);

                if (strcmp(senha, confirmas) != 0) {
                    printf("Senhas diferentes. Tente novamente.\n\n");
                }
            } while (strcmp(senha, confirmas) != 0); 

            printf("Bem-vindo ao Pizza Control, %s\n", email);

            do {
                printf("---------------------------- \n");
                printf("| 1-Frango catupiry--35 R$ | \n");
                printf("| 2-Calabresa--35 R$       | \n");
                printf("| 3-Mussarela--35 R$       | \n");
                printf("| 4-Quatro queijos--35 R$  | \n");
                printf("| 5-Portuguesa--35 R$      | \n");
                printf("---------------------------- \n");
                printf("Escolha sua pizza: ");
                scanf("%d", &escolhaPizza);

                if (escolhaPizza < 1 || escolhaPizza > 5) {
                    printf("Opcao inválida. Escolha novamente.\n");
                }
            } while (escolhaPizza < 1 || escolhaPizza > 5);
            switch(escolhaPizza) {
                case 1: strcpy(nomePizza, "Frango com catupiry"); break;
                case 2: strcpy(nomePizza, "Calabresa"); break;
                case 3: strcpy(nomePizza, "Mussarela"); break;
                case 4: strcpy(nomePizza, "Quatro queijos"); break;
                case 5: strcpy(nomePizza, "Portuguesa"); break;
            }

            printf("Quantas pizzas você deseja? ");
            scanf("%d", &quantidadePizza);

            printf("Deseja bebida? (1-Sim / 2-Nao): ");
            scanf("%d", &querBebida);

            if (querBebida == 1) {
                do {
                    printf("----------------------------- \n");
                    printf("| 1-Coca-Cola--12 R$        | \n");
                    printf("| 2-Guarana--11 R$          | \n");
                    printf("| 3-Suco de laranja--10 R$  | \n");
                    printf("| 4-Agua--8 R$              | \n");
                    printf("----------------------------- \n");
                    printf("Escolha sua bebida: ");
                    scanf("%d", &escolhaBebida);

                    if (escolhaBebida < 1 || escolhaBebida > 4) {
                        printf("Opcao invalida. Escolha novamente.\n");
                    }
                } while (escolhaBebida < 1 || escolhaBebida > 4);

                switch(escolhaBebida) {
                    case 1: strcpy(nomeBebida, "Coca-Cola"); break;
                    case 2: strcpy(nomeBebida, "Guarana"); break;
                    case 3: strcpy(nomeBebida, "Suco de laranja"); break;
                    case 4: strcpy(nomeBebida, "Agua"); break;
                }
            }

            do {
                printf("Metodo de pagamento\n");
                printf("---------------- \n");
                printf("| 1--Credito   | \n");
                printf("| 2--Debito    | \n");
                printf("| 3--PIX       | \n");
                printf("| 4--Dinheiro  | \n");
                printf("---------------- \n");
                scanf("%d", &pagamento);

                if (pagamento < 1 || pagamento > 4) {
                    printf("Opcao invalida. Escolha novamente \n");
                }
            } while (pagamento < 1 || pagamento > 4);

            switch(pagamento) {
                case 1: strcpy(nomePagamento, "Credito"); break;
                case 2: strcpy(nomePagamento, "Debito"); break;
                case 3: strcpy(nomePagamento, "PIX"); break;
                case 4: strcpy(nomePagamento, "Dinheiro"); break;
            }

            printf("\n--- RESUMO DO PEDIDO ---\n");
            printf("Email: %s\n", email);
            printf("Metodo de pagamento: %s\n", nomePagamento);
            printf("Pizza escolhida: %s\n", nomePizza);
            printf("Quantidade de pizzas: %d\n", quantidadePizza);
            if (querBebida == 1) {
                printf("Bebida escolhida: %s\n", nomeBebida);
            } else {
                printf("Sem bebida.\n");
            }
            printf("------------------------\n");
            break;

        case 2:
            printf("Login ainda não implementado.\n");
            break;

        case 3:
            printf("Saindo...\n");
            break;

        default:
            printf("Opção inválida.\n");
    }

    return 0;
}
