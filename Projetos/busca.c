#include <stdlib.h>

#include <stdio.h>

#include <string.h>

 

typedef struct {

    char nome[100];

    char telefone[30];

}Estrtura;

 

#define MAX 100

static Estrtura agenda[MAX];

static int conta = 0;

 

 

void cadastrar(){

    printf("Digite um nome: ");

    fgets(agenda[conta].nome, sizeof(agenda[conta].nome), stdin);

 

    printf("Digite o telefone: ");

    fgets(agenda[conta].telefone, sizeof(agenda[conta].telefone), stdin);

    agenda[conta].nome[strcspn(agenda[conta].nome, "\n")] = '\0';

    agenda[conta].telefone[strcspn(agenda[conta].telefone, "\n")] = '\0';

    conta++;

    if(conta > 0){

        printf("Cadastro realizado com sucesso\n");

    }

}

 

void listar(){

    for(int i = 0; i < conta; i++){

        printf("Cadastro: %d\n Nome: %s\n Telefone: %s\n" ,i+1, agenda[i].nome , agenda[i].telefone);

    }

 

}

 

void buscarNome(){

    char digite[100];

    printf("Digite o nome que quer buscar: ");

    fgets(digite, sizeof(digite), stdin);

    digite[strcspn(digite, "\n")] = '\0';

   

    int encontrado = 0;

 

    for (int i = 0; i < conta; i++) {

        if (strcmp(digite, agenda[i].nome) == 0) {

            printf("Cadastro encontrado:\n");

            printf("Nome: %s\n", agenda[i].nome);

            printf("Telefone: %s\n", agenda[i].telefone);

            encontrado = 1;

            break;  // para ao encontrar o primeiro igual (pode remover para listar todos iguais)

        }

    }

 

    if (!encontrado) {

        printf("Nome nao encontrado.\n");

    }

   

}

 

void menu() {

    int opcao;

 

    do {

        printf("\n===== MENU =====\n");

        printf("1 - Cadastrar contato\n");

        printf("2 - Listar contatos\n");

        printf("3 - Buscar contato por nome\n");

        printf("4 - Sair\n");

        printf("Escolha uma opcao: ");

        scanf("%d", &opcao);

        getchar(); // Limpa o '\n' que fica no buffer após o scanf

 

        switch (opcao) {

            case 1:

                cadastrar();

                break;

            case 2:

                listar();

                break;

            case 3:

                buscarNome();

                break;

            case 4:

                printf("Saindo...\n");

                break;

            default:

                printf("Opcao invalida. Tente novamente.\n");

        }

    } while (opcao != 4);

}

 

 

int main()

{

  

    menu();

    return 0;

}