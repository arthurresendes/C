#include <stdio.h>

int main()
{
    float notaAluno[5];
    float media;
    float soma;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite a nota do aluno: ");
        scanf("%f", &notaAluno[i]);
        soma = soma + notaAluno[i];
        media = soma / 5;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%.2f \n", notaAluno[i]);
    }

    printf("A soma das notas do alunos são: %.2f \n", soma);
    printf("A media dos alunos foi: %.2f", media);

    return 0;
}