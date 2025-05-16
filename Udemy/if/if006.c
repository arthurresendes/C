#include <stdio.h>

int main()

{

    float n1, n2, n3, total;

    printf("Digite o valor 1: ");

    scanf("%f", &n1);

    printf(" Digite o valor 2: ");

    scanf("%f", &n2);

    printf(" Digite o valor 3: ");

    scanf("%f", &n3);

    printf("Digite o valor do premio: ");

    scanf("%f", &total);

    printf("\n Porcentagem recebida de n1: %.2f", n1 / total);

    printf("\n Porcentagem recebida de n2: %.2f", n2 / total);

    printf("\n Porcentagem recebida de n3: %.2f", n3 / total);

    return 0;
}
