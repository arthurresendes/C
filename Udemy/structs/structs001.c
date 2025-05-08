#include <stdio.h>
#include <string.h>

struct pedido
{
    char nome_cliente[100];
    char senha_cliente[50];
    char confirmar_senha[50];
    char nome_produto[100];
    float preco;
    int quantidade;
    int retirada;
    int opcao;
    float preco_total;
};
typedef struct pedido pedido;
int main()
{
    pedido p;
    char nome_salvo[100];
    char senha_salva[50];
    do{
    printf("Ola tudo bem ? Seja bem-vindo a nossa loja");
    printf("Para você comprar produto da nossa loja tem que fazer login ou cadastro. \n 1--Cadastro 2--Login 3--Sair ");
    scanf("%d", &p.opcao);
    getchar();
    switch (p.opcao)
    {
    case 1:
        printf("Digite seu nome: ");
        fgets(p.nome_cliente, sizeof(p.nome_cliente), stdin);
        p.nome_cliente[strcspn(p.nome_cliente, "\n")] = '\0'; // remove '\n'

        do
        {
            printf("Digite sua senha: ");
            fgets(p.senha_cliente, sizeof(p.senha_cliente), stdin);
            p.senha_cliente[strcspn(p.senha_cliente, "\n")] = '\0';

            printf("Confirme sua senha: ");
            fgets(p.confirmar_senha, sizeof(p.confirmar_senha), stdin);
            p.confirmar_senha[strcspn(p.confirmar_senha, "\n")] = '\0';

            if (strcmp(p.senha_cliente, p.confirmar_senha) != 0)
            {
                printf("As senhas não conferem. Tente novamente.\n");
            }

        } while (strcmp(p.senha_cliente, p.confirmar_senha) != 0);

        // Guarda dados para login
        strcpy(nome_salvo, p.nome_cliente);
        strcpy(senha_salva, p.senha_cliente);
        system("cls");

        printf("Cadastro realizado com sucesso! Bem-vindo(a), %s!\n", p.nome_cliente);
     

        printf("Digite o nome do produto: ");
        fgets(p.nome_produto, sizeof(p.nome_produto), stdin);
        p.nome_produto[strcspn(p.nome_produto, "\n")] = '\0';

        printf("Digite o preco do produto: ");
        scanf("%f", &p.preco);

        printf("Digite a quantidade do produto: ");
        scanf("%d", &p.quantidade);

        p.preco_total = p.preco * p.quantidade;

        printf("Deseja alterar algo (1-Tudo 2-produto 3-quantidade)");
        scanf("%d", &p.retirada);
        getchar();

        if (p.retirada == 1)
        {
            printf("Digite o nome do produto: ");
            fgets(p.nome_produto, sizeof(p.nome_produto), stdin);
            p.nome_produto[strcspn(p.nome_produto, "\n")] = '\0';

            printf("Digite o preco do produto: ");
            scanf("%f", &p.preco);

            printf("Digite a quantidade do produto: ");
            scanf("%d", &p.quantidade);
            p.preco_total = p.preco * p.quantidade;

            printf("Ola %s \n", p.nome_cliente);
            printf("Seu produto e %s \n", p.nome_produto);
            printf("Preco individual: %.2f \n", p.preco);
            printf("Quantidade desejada %d \n", p.quantidade);
            printf("Preco total a se pagar: %.2f \n", p.preco_total);
            break;
        }
        else if (p.retirada == 2)
        {
            printf("Digite o nome do produto: ");
            fgets(p.nome_produto, sizeof(p.nome_produto), stdin);
            p.nome_produto[strcspn(p.nome_produto, "\n")] = '\0';

            printf("Digite o preco do produto: ");
            scanf("%f", &p.preco);
            p.preco_total = p.preco * p.quantidade;

            printf("Ola %s \n", p.nome_cliente);
            printf("Seu produto e %s \n", p.nome_produto);
            printf("Preco individual: %.2f \n", p.preco);
            printf("Quantidade desejada %d \n", p.quantidade);
            printf("Preco total a se pagar: %.2f \n", p.preco_total);
            break;
        }
        else if (p.retirada == 3)
        {
            printf("Digite a quantidade do produto: ");
            scanf("%d", &p.quantidade);
            p.preco_total = p.preco * p.quantidade;

            printf("Ola %s \n", p.nome_cliente);
            printf("Seu produto e %s \n", p.nome_produto);
            printf("Preco individual: %.2f \n", p.preco);
            printf("Quantidade desejada %d \n", p.quantidade);
            printf("Preco total a se pagar: %.2f \n", p.preco_total);
            break;
        }
        else if ((p.retirada > 3 || p.retirada < 0))
        {
            printf("Opção invalida , pedido mantido");
            printf("Ola %s \n", p.nome_cliente);
            printf("Seu produto e %s \n", p.nome_produto);
            printf("Preco individual: %.2f \n", p.preco);
            printf("Quantidade desejada %d \n", p.quantidade);
            printf("Preco total a se pagar: %.2f \n", p.preco_total);
            break;
        }
        else
            printf("Ola %s \n", p.nome_cliente);
        printf("Seu produto e %s \n", p.nome_produto);
        printf("Preco individual: %.2f \n", p.preco);
        printf("Quantidade desejada %d \n", p.quantidade);
        printf("Preco total a se pagar: %.2f \n", p.preco_total);

        break;


    case 2:

        printf("Digite seu nome: ");
        fgets(p.nome_cliente, sizeof(p.nome_cliente), stdin);
        p.nome_cliente[strcspn(p.nome_cliente, "\n")] = '\0';

        printf("Digite sua senha: ");
        fgets(p.senha_cliente, sizeof(p.senha_cliente), stdin);
        p.senha_cliente[strcspn(p.senha_cliente, "\n")] = '\0';

        system("cls");
        printf("Login realizado com sucesso! Bem-vindo de volta, %s!\n", p.nome_cliente);


        printf("Digite o nome do produto: ");
        fgets(p.nome_produto, sizeof(p.nome_produto), stdin);
        p.nome_produto[strcspn(p.nome_produto, "\n")] = '\0';

        printf("Digite o preco do produto: ");
        scanf("%f", &p.preco);

        printf("Digite a quantidade do produto: ");
        scanf("%d", &p.quantidade);

        p.preco_total = p.preco * p.quantidade;

        printf("Deseja alterar algo (1-Tudo 2-produto 3-quantidade)");
        scanf("%d", &p.retirada);
        getchar();

        if (p.retirada == 1)
        {
            printf("Digite o nome do produto: ");
            fgets(p.nome_produto, sizeof(p.nome_produto), stdin);
            p.nome_produto[strcspn(p.nome_produto, "\n")] = '\0';

            printf("Digite o preco do produto: ");
            scanf("%f", &p.preco);

            printf("Digite a quantidade do produto: ");
            scanf("%d", &p.quantidade);
            p.preco_total = p.preco * p.quantidade;

            printf("Ola %s \n", p.nome_cliente);
            printf("Seu produto e %s \n", p.nome_produto);
            printf("Preco individual: %.2f \n", p.preco);
            printf("Quantidade desejada %d \n", p.quantidade);
            printf("Preco total a se pagar: %.2f \n", p.preco_total);
            break;
        }
        else if (p.retirada == 2)
        {
            printf("Digite o nome do produto: ");
            fgets(p.nome_produto, sizeof(p.nome_produto), stdin);
            p.nome_produto[strcspn(p.nome_produto, "\n")] = '\0';

            printf("Digite o preco do produto: ");
            scanf("%f", &p.preco);
            p.preco_total = p.preco * p.quantidade;

            printf("Ola %s \n", p.nome_cliente);
            printf("Seu produto e %s \n", p.nome_produto);
            printf("Preco individual: %.2f \n", p.preco);
            printf("Quantidade desejada %d \n", p.quantidade);
            printf("Preco total a se pagar: %.2f \n", p.preco_total);
            break;
        }
        else if (p.retirada == 3)
        {
            printf("Digite a quantidade do produto: ");
            scanf("%d", &p.quantidade);
            p.preco_total = p.preco * p.quantidade;

            printf("Ola %s \n", p.nome_cliente);
            printf("Seu produto e %s \n", p.nome_produto);
            printf("Preco individual: %.2f \n", p.preco);
            printf("Quantidade desejada %d \n", p.quantidade);
            printf("Preco total a se pagar: %.2f \n", p.preco_total);
            break;
        }
        else if ((p.retirada > 3 || p.retirada < 0))
        {
            printf("Opção invalida , pedido mantido");
            printf("Ola %s \n", p.nome_cliente);
            printf("Seu produto e %s \n", p.nome_produto);
            printf("Preco individual: %.2f \n", p.preco);
            printf("Quantidade desejada %d \n", p.quantidade);
            printf("Preco total a se pagar: %.2f \n", p.preco_total);
            break;
        }
        else
            printf("Ola %s \n", p.nome_cliente);
        printf("Seu produto e %s \n", p.nome_produto);
        printf("Preco individual: %.2f \n", p.preco);
        printf("Quantidade desejada %d \n", p.quantidade);
        printf("Preco total a se pagar: %.2f \n", p.preco_total);

        break;

        case 3:
        printf("Obrigado por visitar nossa pagina!!");
        return 0;

    }
        
    } while (p.opcao < 1 || p.opcao > 2);

    return 0;
}