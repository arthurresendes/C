#include <stdio.h>

int main()
{
    float nota[100];
    int alunos;
    float soma = 0.0;
    float media = 0.0;

    printf("Digite a quantidade de alunos que ira adicionar nota: ");
    scanf("%d", &alunos);

    for (int i = 0; i < alunos; i++)
    {
        printf("Digite a nota do alundo %d: ", i + 1);
        scanf("%f", &nota[i]);
        soma += nota[i];
    }

    media = soma / alunos;

    for (int i = 0; i < alunos; i++)
    {
        printf("Nota aluno [%d]: %f\n", i + 1, nota[i]);
    }

    printf("A soma das notas: %.2f\n", soma);
    printf("A media das notas: %.2f", media);

    return 0;
}