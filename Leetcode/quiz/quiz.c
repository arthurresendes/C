#include <stdio.h>

#include <stdlib.h>

#ifdef _WIN32

#include <windows.h>

#define esperar(segundos) Sleep((segundos) * 1000)

#else

#include <unistd.h>

#define esperar(segundos) sleep(segundos)

#endif

typedef struct
{

    int resposta;

} Quiz;

void perguntas(Quiz qz);

void mostraPergunta();

int main()

{

    Quiz qz;

    perguntas(qz);

    mostraPergunta();

    return 0;
}

void perguntas(Quiz qz)
{

    printf("\nQual cor eh primaria:");

    printf("\n1-Azul\n2-Roxo\n3-Laranja\n4-Cinza\n");

    scanf("%d", &qz.resposta);

    if (qz.resposta == 1)
    {

        printf("Voce ganhou\n\n");

        esperar(3);
    }
    else
    {

        printf("Voce perdeu\n\n");

        esperar(3);
    }
}

void mostraPergunta()
{

    printf("\nPergunta para estudo");

    printf("Qual cor eh primaria:");

    printf("\n1-Azul\n2-Roxo\n3-Laranja\n4-Cinza\n");

    esperar(10);
}