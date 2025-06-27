#include <stdio.h>

#ifdef _WIN32

#include <windows.h>

#define esperar(segundos) Sleep((segundos) * 1000)

#else

#include <unistd.h>

#define esperar(segundos) sleep(segundos)

#endif

void lerVetor(int vetor[], int tamanho)
{

    for (int i = 0; i < tamanho; i++)
    {

        printf("Vetor %d: ", i + 1);

        scanf("%d", &vetor[i]);
    }
}

void imprimirVetor(int vetor[], int tamanho, char tipo[])
{

    printf("\nImprimindo %s\n", tipo);

    for (int i = 0; i < tamanho; i++)
    {

        printf("%s %d: %d\n", tipo, i + 1, vetor[i]);

        esperar(2);
    }
}

void separarParesEImpares(int original[], int tamanho, int pares[], int *qtdPares, int impares[], int *qtdImpares)
{

    *qtdPares = 0;

    *qtdImpares = 0;

    for (int i = 0; i < tamanho; i++)
    {

        if (original[i] % 2 == 0)
        {

            pares[*qtdPares] = original[i];

            (*qtdPares)++;
        }
        else
        {

            impares[*qtdImpares] = original[i];

            (*qtdImpares)++;
        }
    }
}

int main()
{

    int vetor[100], pares[100], impares[100];

    int tamanho, qtdPares, qtdImpares;

    printf("Digite quantos numeros deseja adicionar: ");

    scanf("%d", &tamanho);

    lerVetor(vetor, tamanho);

    imprimirVetor(vetor, tamanho, "vetor original");

    separarParesEImpares(vetor, tamanho, pares, &qtdPares, impares, &qtdImpares);

    imprimirVetor(pares, qtdPares, "vetores pares");

    imprimirVetor(impares, qtdImpares, "vetores impares");

    return 0;
}