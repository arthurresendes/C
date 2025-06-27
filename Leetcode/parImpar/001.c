#include <stdio.h>

#ifdef _WIN32

#include <windows.h>

#define esperar(segundos) Sleep((segundos) * 1000)

#else

#include <unistd.h>

#define esperar(segundos) sleep(segundos)

#endif

int main()

{

    int vetor[100];

    int tamanho;

    printf("Digite quantos numeros deseja adicionar: ");

    scanf("%d", &tamanho);

    for (int i = 0; i < tamanho; i++)
    {

        printf("Vetor %d: ", i + 1);

        scanf("%d", &vetor[i]);
    }

    printf("\nImprimindo vetores\n");

    for (int i = 0; i < tamanho; i++)
    {

        printf("Vetor %d: %d\n", i + 1, vetor[i]);

        esperar(2);
    }

    printf("\nImprimindo vetores pares\n");

    for (int i = 0; i < tamanho; i++)
    {

        if (vetor[i] % 2 == 0)
        {

            printf("Vetor par %d: %d\n", i + 1, vetor[i]);

            esperar(3);
        }
    }

    printf("\nImprimindo vetores impares\n");

    for (int i = 0; i < tamanho; i++)
    {

        if (vetor[i] % 2 != 0)
        {

            printf("Vetor impar %d: %d\n", i + 1, vetor[i]);

            esperar(3);
        }
    }

    return 0;
}