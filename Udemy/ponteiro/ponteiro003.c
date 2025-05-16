#include <stdio.h>

#include <math.h>

int main()

{

    int n1 = 5;

    char letra = 'a';

    float n2 = 10.00;

    printf("%d \n", n1);

    printf("%c \n", letra);

    printf("%.2f \n\n", n2);

    int *ponteiro;

    char *ponteiro2;

    float *ponteiro3;

    ponteiro = &n1;

    n1 = *ponteiro;

    ponteiro2 = &letra;

    letra = *ponteiro;

    ponteiro3 = &n2;

    n2 = *ponteiro3;

    *ponteiro = 55;

    *ponteiro2 = 'b';

    *ponteiro3 = 55.55;

    printf("%d \n", n1);

    printf("%c \n", letra);

    printf("%.2f", n2);

    return 0;
}
