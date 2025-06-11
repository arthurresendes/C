#include <string.h>

#include <stdio.h>

struct Hemograma
{

    float hemacias;

    float hemoglobina;

    float hematocrito;

    float linfocitos;

    float monocitos;

    char resultado;
};

int main()

{

    struct Hemograma hemo;

    int alterado = 0;

    printf("Digite a quantidade de hemacias: ");

    scanf("%f", &hemo.hemacias);

    printf("Digite a quantidade de hemoglobina: ");

    scanf("%f", &hemo.hemoglobina);

    printf("Digite a quantidade de hematocrito: ");

    scanf("%f", &hemo.hematocrito);

    printf("Digite a quantidade de linfocitos: ");

    scanf("%f", &hemo.linfocitos);

    printf("Digite a quantidade de monocitos: ");

    scanf("%f", &hemo.monocitos);

    if (hemo.hemacias < 4.5 || hemo.hemacias > 5.9)
        alterado++;

    if (hemo.hemoglobina < 13.0 || hemo.hemoglobina > 17.0)
        alterado++;

    if (hemo.hematocrito < 38.0 || hemo.hematocrito > 52.0)
        alterado++;

    if (hemo.linfocitos < 20.0 || hemo.linfocitos > 50.0)
        alterado++;

    if (hemo.monocitos < 2.0 || hemo.monocitos > 8.0)
        alterado++;

    if (alterado == 0)
    {

        hemo.resultado = 'B';
    }
    else
    {

        hemo.resultado = 'R';
    }

    printf("\nResultado do hemograma: %c\n", hemo.resultado);

    if (hemo.resultado == 'B')

        printf("Todos os valores estão dentro da faixa considerada normal.\n");

    else

        printf("Um ou mais valores estão fora da faixa normal.\n");

    return 0;
}