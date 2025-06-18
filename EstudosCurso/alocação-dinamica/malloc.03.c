#include <stdio.h>

#include <stdlib.h>

int main()

{

    int num;

    float *valores, soma = 0.0;

    printf("Digite quantos numeros quer digitar: ");

    scanf("%d", &num);

    valores = (float *)malloc(num * sizeof(float));

    if (valores == NULL)
    {

        printf("Erro de alocacao de memoria.\n");

        return 1;
    }

    for (int i = 0; i < num; i++)
    {

        printf("Digite numeros %d: ", i + 1);

        scanf("%f", &valores[i]);

        soma += valores[i];
    }

    printf("Media = %.2f\n", soma / num);

    free(valores);

    return 0;
}