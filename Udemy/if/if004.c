#include <stdio.h>

int main()

{

    int n1, n2, n3, quadrado1, quadrado2, quadrado3, resultadoQuadrado, soma;

    printf("Digite o numero 1: ");

    scanf("%d", &n1);

    printf("\n Digite o numero 2: ");

    scanf("%d", &n2);

    printf("\n Digite o numero 3: ");

    scanf("%d", &n3);

    soma = n1 + n2 + n3;

    quadrado1 = n1 * n1;

    quadrado2 = n2 * n2;

    quadrado3 = n3 * n3;

    resultadoQuadrado = quadrado1 + quadrado2 + quadrado3;

    printf("Numero 1: %d, quadrado de 1: %d", n1, quadrado1);

    printf("\n Numero 2: %d, quadrado de 2: %d", n2, quadrado2);

    printf("\n Numero 3: %d, quadrado de 3: %d", n3, quadrado3);

    printf("\n Soma numeros normais: %d", soma);

    printf("\n Soma numeros quadrados: %d", resultadoQuadrado);

    return 0;
}