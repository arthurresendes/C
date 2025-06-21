#include <stdio.h>

void selectSort(int vetor[], int tamanho)
{
    int maior, troca;
    for(int i = 0; i < tamanho - 1; i++){
        maior = i;
        for(int j = i + 1; j < tamanho ; j++){
            if(vetor[j] > vetor[maior]){
                maior = j;
            }
        }
        if(i != maior){
            troca = vetor[i];
            vetor[i] = vetor[maior];
            vetor[maior] = troca;
        }
    }
}

int main()
{
    int idade[7];

    for (int i = 0; i < 7; i++)
    {
        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &idade[i]);
    }

    selectSort(idade, 7);

    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", idade[i]);
    }

    return 0;
}
