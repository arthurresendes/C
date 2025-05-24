#include <stdio.h>

int main()
{
    /*
    Vetor sempre começa a contagem do 0 sempre termina com uma formula de n-1 , no meu caso um vetor de [5] a conta seria 5-1 que é 4 , justamente o nosso final.
    Exemplo:
    |0|1|2|3|4|
    -----------

    */
    int valores[5];
    int *maior;
    for (int i = 0; i < 5; i++)
    {
        printf("\n Digite o valor de [%d]:  ", i + 1);
        scanf("%d", &valores[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", valores[i]);
    }

    printf("Vetor[0]:\n Endereço de memoria:%p \n Valor da variavel: %d \n\n", &valores[0], valores[0]);
    printf("Vetor[1]:\n Endereço de memoria:%p \n Valor da variavel: %d \n\n", &valores[1], valores[1]);
    printf("Vetor[2]:\n Endereço de memoria:%p \n Valor da variavel: %d \n\n", &valores[2], valores[2]);
    printf("Vetor[3]:\n Endereço de memoria:%p \n Valor da variavel: %d \n\n", &valores[3], valores[3]);
    printf("Vetor[4]:\n Endereço de memoria:%p \n Valor da variavel: %d \n\n", &valores[4], valores[4]);

    maior = &valores[0];
    for (int i = 1; i < 5; i++)
    {
        if (valores[i] > *maior)
        {
            maior = &valores[i];
        }
    }
    printf("Endereço do maior valor: %p\n", (void *)maior); //void* é usado para evitar o warning de conversão de ponteiro e é utilizado para qualquer tipo de ponteiro
}
