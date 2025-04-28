#include <stdio.h>

#include <stdlib.h>

int main()

{

    int opcao, resposta1, resposta2, resposta3, resposta4, resposta5;

    int pontos = 0;

    printf("--MENU-- \n");

    printf("1 - Perguntas \n");

    printf("2 - Sair \n");

    scanf("%d", &opcao);

    if (opcao == 1)
    {

        printf("Pergunta 1: \n");

        printf("Qual das alternativas abaixo é a sintaxe correta para declarar uma variável inteira? \n");

        printf("1) int 1x; \n");

        printf("2) int x = 10; \n");

        printf("3) integer x; \n");

        printf("4) int: x; \n");

        scanf("%d", &resposta1);

        if (resposta1 == 2)
        {

            printf("Parabéns, você acertou! \n");

            pontos++;
        }
        else
        {

            printf("Você errou! \n");
        }

        printf("Pergunta 2: \n");

        printf("O que faz o comando scanf em C? \n");

        printf("1) Exibe uma mensagem na tela. \n");

        printf("2) Lê dados da entrada padrão (teclado). \n");

        printf("3) Cria uma variável de entrada. \n");

        printf("4) Limpa a tela do console. \n");

        scanf("%d", &resposta2);

        if (resposta2 == 2)
        {

            printf("Parabéns, você acertou! \n");

            pontos++;
        }
        else
        {

            printf("Você errou! \n");
        }

        printf("Pergunta 3: \n");

        printf("Qual a diferença entre 'while' e 'for'? \n");

        printf("1) Ambos funcionam da mesma forma. \n");

        printf("2) 'for' é para repetir um número fixo de vezes e 'while' é para repetir até que uma condição seja falsa. \n");

        printf("3) 'while' nunca entra em loop, já o 'for' sempre entra. \n");

        printf("4) Não existe a estrutura 'while' em C. \n");

        scanf("%d", &resposta3);

        if (resposta3 == 2)
        {

            printf("Parabéns, você acertou! \n");

            pontos++;
        }
        else
        {

            printf("Você errou! \n");
        }

        printf("Pergunta 4: \n");

        printf("Qual é o propósito do comando break? \n");

        printf("1) Continuar a execução do código até o fim. \n");

        printf("2) Parar a execução de um laço (for, while) ou switch. \n");

        printf("3) Entrar em um laço de repetição. \n");

        printf("4) Definir uma condição de parada no código. \n");

        scanf("%d", &resposta4);

        if (resposta4 == 2)
        {

            printf("Parabéns, você acertou! \n");

            pontos++;
        }
        else
        {

            printf("Você errou! \n");
        }

        printf("Pergunta 5: \n");

        printf("Em C, qual a função do comando fgets()? \n");

        printf("1) Ler uma linha de texto e armazenar em uma variável. \n");

        printf("2) Escrever uma linha de texto no terminal. \n");

        printf("3) Limpar a tela do console. \n");

        printf("4) Declarar uma variável de tipo string. \n");

        scanf("%d", &resposta5);

        if (resposta5 == 1)
        {

            printf("Parabéns, você acertou! \n");

            pontos++;
        }
        else
        {

            printf("Você errou! \n");
        }

        printf("Seus pontos foram: %d", pontos);
    }

    return 0;
