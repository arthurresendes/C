#include <stdio.h>
#include <string.h>

int main()
{
    int menu, pedido, escolhaPizza, escolhaBebida, quantidadePizza, querBebida, querDoce, querSalgada, pagamento, cep, cpf, quantidadeBebida, quantidadeDoce, escolhaDoce;
    char email[50];
    char complemento[50];
    char nomePizza[50];
    char nomeBebida[50];
    char nomeDoce[50];
    char nomePagamento[50];
    char senha[50];
    char confirmas[50];
    float precoPizza = 0.0, precoBebida = 0.0, precoDoce = 0.0, total = 0.0;

    printf("----------------- \n");
    printf("| 1-Cadastro    | \n");
    printf("| 2-Login       | \n");
    printf("| 3-Sair        | \n");
    printf("----------------- \n");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        do
        {
            printf("Digite seu e-mail: ");
            scanf("%s", email);

            printf("Digite seu CPF: ");
            scanf("%d", &cpf);

            printf("Digite seu CEP: ");
            scanf("%d", &cep);

            getchar(); // limpa o '\n' que ficou no buffer

            printf("Digite complemento do endereco(pontos populares):");
            fgets(complemento, sizeof(complemento), stdin);
            complemento[strcspn(complemento, "\n")] = '\0';

            printf("Digite sua senha: ");
            scanf("%s", senha);

            printf("Confirme sua senha: ");
            scanf("%s", confirmas);

            if (strcmp(senha, confirmas) != 0)
            {
                printf("Senhas diferentes. Tente novamente.\n\n");
            }
        } while (strcmp(senha, confirmas) != 0);

        printf("Bem-vindo ao Pizza Control, %s\n", email);

        printf("Deseja Pizza salgada? (1-Sim / 2-Nao): ");
        scanf("%d", &querSalgada);
        if (querSalgada == 1)
        {
            do
            {
                printf("---------------------------- \n");
                printf("| 1-Frango catupiry--50 R$ | \n");
                printf("| 2-Calabresa--50 R$       | \n");
                printf("| 3-Mussarela--50 R$       | \n");
                printf("| 4-Quatro queijos--50 R$  | \n");
                printf("| 5-Portuguesa--50 R$      | \n");
                printf("---------------------------- \n");
                printf("Escolha sua pizza: ");
                scanf("%d", &escolhaPizza);

                if (escolhaPizza < 1 || escolhaPizza > 5)
                {
                    printf("Opcao inválida. Escolha novamente.\n");
                }
            } while (escolhaPizza < 1 || escolhaPizza > 5);
            switch (escolhaPizza)
            {
            case 1:
                strcpy(nomePizza, "Frango com catupiry");
                break;
            case 2:
                strcpy(nomePizza, "Calabresa");
                break;
            case 3:
                strcpy(nomePizza, "Mussarela");
                break;
            case 4:
                strcpy(nomePizza, "Quatro queijos");
                break;
            case 5:
                strcpy(nomePizza, "Portuguesa");
                break;
            }

            printf("Quantas pizzas voce deseja? ");
            scanf("%d", &quantidadePizza);

            precoPizza = 50.0 * quantidadePizza;
        }
        else
        {
            printf("Sem pizza salgada!\n");
            precoPizza = 0.0;
            quantidadePizza = 0;
        }

        printf("Deseja bebida? (1-Sim / 2-Nao): ");
        scanf("%d", &querBebida);

        if (querBebida == 1)
        {
            do
            {
                printf("----------------------------- \n");
                printf("| 1-Coca-Cola--12 R$        | \n");
                printf("| 2-Guarana--11 R$          | \n");
                printf("| 3-Suco de laranja--10 R$  | \n");
                printf("| 4-Agua--8 R$              | \n");
                printf("----------------------------- \n");
                printf("Escolha sua bebida: ");
                scanf("%d", &escolhaBebida);

                if (escolhaBebida < 1 || escolhaBebida > 4)
                {
                    printf("Opcao invalida. Escolha novamente.\n");
                }
            } while (escolhaBebida < 1 || escolhaBebida > 4);

            switch (escolhaBebida)
            {
            case 1:
                strcpy(nomeBebida, "Coca-Cola");
                precoBebida = 12.0;
                break;
            case 2:
                strcpy(nomeBebida, "Guarana");
                precoBebida = 11.0;
                break;
            case 3:
                strcpy(nomeBebida, "Suco de laranja");
                precoBebida = 10.0;
                break;
            case 4:
                strcpy(nomeBebida, "Agua");
                precoBebida = 8.0;
                break;
            }
            printf("Quantas bebidas voce deseja? ");
            scanf("%d", &quantidadeBebida);
            precoBebida = precoBebida * quantidadeBebida;
        }
        else
        {
            printf("Sem bebida!\n");
            precoBebida = 0.0;
            quantidadeBebida = 0;
        }

        printf("Deseja Pizza doce? (1-Sim / 2-Nao): ");
        scanf("%d", &querDoce);

        if (querDoce == 1)
        {
            do
            {
                printf("----------------------------- \n");
                printf("| 1-Chocolate--50 R$        | \n");
                printf("| 2-Prestigio--55 R$        |\n");
                printf("| 3-RomeuJulieta--55 R$  | \n");
                printf("| 4-Brigadeiro--50 R$       |\n");
                printf("----------------------------- \n");
                printf("Escolha sua pizza doce: ");
                scanf("%d", &escolhaDoce);

                if (escolhaDoce < 1 || escolhaDoce > 4)
                {
                    printf("Opcao invalida. Escolha novamente.\n");
                }
            } while (escolhaDoce < 1 || escolhaDoce > 4);

            switch (escolhaDoce)
            {
            case 1:
                strcpy(nomeDoce, "Chocolate");
                precoDoce = 50.0;
                break;
            case 2:
                strcpy(nomeDoce, "Prestigio");
                precoDoce = 55.0;
                break;
            case 3:
                strcpy(nomeDoce, "RomeuJulieta");
                precoDoce = 55.0;
                break;
            case 4:
                strcpy(nomeDoce, "Brigadeiro");
                precoDoce = 50.0;
                break;
            }
            printf("Quantas pizza doce voce deseja? ");
            scanf("%d", &quantidadeDoce);
            precoDoce = precoDoce * quantidadeDoce;
        }
        else
        {
            printf("Sem Pizza doce!\n");
            precoDoce = 0.0;
            quantidadeDoce = 0;
        }

        if (querSalgada == 2 && querBebida == 2 && querDoce == 2)
        {
            printf("Nenhum pedido registrado \n");
            return 0;
        }

        do
        {
            printf("Metodo de pagamento\n");
            printf("---------------- \n");
            printf("| 1--Credito   | \n");
            printf("| 2--Debito    | \n");
            printf("| 3--PIX       | \n");
            printf("| 4--Dinheiro  | \n");
            printf("---------------- \n");
            scanf("%d", &pagamento);

            if (pagamento < 1 || pagamento > 4)
            {
                printf("Opcao invalida. Escolha novamente \n");
            }
        } while (pagamento < 1 || pagamento > 4);

        switch (pagamento)
        {
        case 1:
            strcpy(nomePagamento, "Credito");
            break;
        case 2:
            strcpy(nomePagamento, "Debito");
            break;
        case 3:
            strcpy(nomePagamento, "PIX");
            break;
        case 4:
            strcpy(nomePagamento, "Dinheiro");
            break;
        }

        printf("\n--- RESUMO DO PEDIDO ---\n");
        printf("Email: %s\n", email);
        printf("CEP: %d\n", cep);
        printf("Pizza salgada escolhida: %d %s , preco = %.2f\n", quantidadePizza, nomePizza, precoPizza);
        if (querBebida == 1)
        {
            printf("Bebida escolhida: %d %s , preco = %.2f\n", quantidadeBebida, nomeBebida, precoBebida);
        }
        else
        {
            printf("Sem bebida , preco = %.2f.\n", precoBebida = 0.0);
        }
        if (querDoce == 1)
        {
            printf("Pizza doce escolhida: %d %s , preco = %.2f\n", quantidadeDoce, nomeDoce, precoDoce);
        }
        else
        {
            printf("Sem pizza doce ,preco = %.2f.\n", precoDoce = 0.0);
        }
        total = precoPizza + precoBebida + precoDoce;
        printf("Total do pedido: %.2f\n", total);
        printf("Metodo de pagamento: %s\n", nomePagamento);
        printf("------------------------\n");
        break;

    case 2:
        printf("Digite seu e-mail:");
        scanf("%s", email);
        printf("Digite sua senha: ");
        scanf("%s", senha);
        printf("Bom ter voce de volta a PizzaControl , %s\n", email);
        printf("Deseja Pizza salgada? (1-Sim / 2-Nao): ");
        scanf("%d", &querSalgada);
        if (querSalgada == 1)
        {
        do
        {
            printf("---------------------------- \n");
            printf("| 1-Frango catupiry--50 R$ | \n");
            printf("| 2-Calabresa--50 R$       | \n");
            printf("| 3-Mussarela--50 R$       | \n");
            printf("| 4-Quatro queijos--50 R$  | \n");
            printf("| 5-Portuguesa--50 R$      | \n");
            printf("---------------------------- \n");
            printf("Escolha sua pizza: ");
            scanf("%d", &escolhaPizza);

            if (escolhaPizza < 1 || escolhaPizza > 5)
            {
                printf("Opcao inválida. Escolha novamente.\n");
            }
        } while (escolhaPizza < 1 || escolhaPizza > 5);
        switch (escolhaPizza)
        {
        case 1:
            strcpy(nomePizza, "Frango com catupiry");
            break;
        case 2:
            strcpy(nomePizza, "Calabresa");
            break;
        case 3:
            strcpy(nomePizza, "Mussarela");
            break;
        case 4:
            strcpy(nomePizza, "Quatro queijos");
            break;
        case 5:
            strcpy(nomePizza, "Portuguesa");
            break;
        }
        printf("Quantas pizzas voce deseja? ");
            scanf("%d", &quantidadePizza);

            precoPizza = 50.0 * quantidadePizza;
    }
        else
        {
            printf("Sem Pizza salgada!\n");
            precoPizza = 0.0;
            quantidadePizza = 0;
        }

        printf("Deseja bebida? (1-Sim / 2-Nao): ");
        scanf("%d", &querBebida);

        if (querBebida == 1)
        {
            do
            {
                printf("----------------------------- \n");
                printf("| 1-Coca-Cola--12 R$        | \n");
                printf("| 2-Guarana--11 R$          | \n");
                printf("| 3-Suco de laranja--10 R$  | \n");
                printf("| 4-Agua--8 R$              | \n");
                printf("----------------------------- \n");
                printf("Escolha sua bebida: ");
                scanf("%d", &escolhaBebida);

                if (escolhaBebida < 1 || escolhaBebida > 4)
                {
                    printf("Opcao invalida. Escolha novamente.\n");
                }
            } while (escolhaBebida < 1 || escolhaBebida > 4);

            switch (escolhaBebida)
            {
            case 1:
                strcpy(nomeBebida, "Coca-Cola");
                precoBebida = 12.0;
                break;
            case 2:
                strcpy(nomeBebida, "Guarana");
                precoBebida = 11.0;
                break;
            case 3:
                strcpy(nomeBebida, "Suco de laranja");
                precoBebida = 10.0;
                break;
            case 4:
                strcpy(nomeBebida, "Agua");
                precoBebida = 8.0;
                break;
            }

            printf("Quantas bebidas voce deseja? ");
            scanf("%d", &quantidadeBebida);

            precoBebida = precoBebida * quantidadeBebida;
        }
        else
        {
            printf("Sem bebida!\n");
            precoBebida = 0.0;
            quantidadeBebida = 0;
        }

        printf("Deseja Pizza doce? (1-Sim / 2-Nao): ");
        scanf("%d", &querDoce);

        if (querDoce == 1)
        {
            do
            {
                printf("----------------------------- \n");
                printf("| 1-Chocolate--50 R$        | \n");
                printf("| 2-Prestigio--55 R$        |\n");
                printf("| 3-RomeuJulieta--55 R$  | \n");
                printf("| 4-Brigadeiro--50 R$       |\n");
                printf("----------------------------- \n");
                printf("Escolha sua pizza doce: ");
                scanf("%d", &escolhaDoce);

                if (escolhaDoce < 1 || escolhaDoce > 4)
                {
                    printf("Opcao invalida. Escolha novamente.\n");
                }
            } while (escolhaDoce < 1 || escolhaDoce > 4);

            switch (escolhaDoce)
            {
            case 1:
                strcpy(nomeDoce, "Chocolate");
                precoDoce = 50.0;
                break;
            case 2:
                strcpy(nomeDoce, "Prestigio");
                precoDoce = 55.0;
                break;
            case 3:
                strcpy(nomeDoce, "RomeuJulieta");
                precoDoce = 55.0;
                break;
            case 4:
                strcpy(nomeDoce, "Brigadeiro");
                precoDoce = 50.0;
                break;
            }
            printf("Quantas pizza doce voce deseja? ");
            scanf("%d", &quantidadeDoce);

            precoDoce = precoDoce * quantidadeDoce;
        }
        else
        {
            printf("Sem Pizza doce!\n");
            precoDoce = 0.0;
            quantidadeDoce = 0;
        }

        if (querSalgada == 2 && querBebida == 2 && querDoce == 2)
        {
            printf("Nenhum pedido registrado \n");
            return 0;
        }

        do
        {
            printf("Metodo de pagamento\n");
            printf("---------------- \n");
            printf("| 1--Credito   | \n");
            printf("| 2--Debito    | \n");
            printf("| 3--PIX       | \n");
            printf("| 4--Dinheiro  | \n");
            printf("---------------- \n");
            scanf("%d", &pagamento);

            if (pagamento < 1 || pagamento > 4)
            {
                printf("Opcao invalida. Escolha novamente \n");
            }
        } while (pagamento < 1 || pagamento > 4);

        switch (pagamento)
        {
        case 1:
            strcpy(nomePagamento, "Credito");
            break;
        case 2:
            strcpy(nomePagamento, "Debito");
            break;
        case 3:
            strcpy(nomePagamento, "PIX");
            break;
        case 4:
            strcpy(nomePagamento, "Dinheiro");
            break;
        }

        printf("\n--- RESUMO DO PEDIDO ---\n");
        printf("Email: %s\n", email);
        printf("CEP: %d\n", cep);
        printf("Pizza salgada escolhida: %d %s , preco = %.2f\n", quantidadePizza, nomePizza, precoPizza);
        if (querBebida == 1)
        {
            printf("Bebida escolhida: %d %s , preco = %.2f\n", quantidadeBebida, nomeBebida, precoBebida);
        }
        else
        {
            printf("Sem bebida , preco = %.2f.\n", precoBebida = 0.0);
        }
        if (querDoce == 1)
        {
            printf("Pizza doce escolhida: %d %s , preco = %.2f\n", quantidadeDoce, nomeDoce, precoDoce);
        }
        else
        {
            printf("Sem pizza doce ,preco = %.2f.\n", precoDoce = 0.0);
        }
        total = precoPizza + precoBebida + precoDoce;
        printf("Total do pedido: %.2f\n", total);
        printf("Metodo de pagamento: %s\n", nomePagamento);
        printf("------------------------\n");
        break;

    case 3:
        printf("Saindo...\n");
        break;

    default:
        printf("Opção inválida.\n");
    }

    return 0;
}
