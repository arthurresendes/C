#include <stdio.h>

int main()

{

    float n1, n2, n3, n4;

    float media;

    printf("Digite a nota 1: ");

    scanf("%f", &n1);

    printf("\n Digite a nota 2: ");

    scanf("%f", &n2);

    printf("\n Digite a nota 3: ");

    scanf("%f", &n3);

    printf("\n Digite a nota 4: ");

    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    printf("A media eh: %.2f", media);

    return 0;
}
