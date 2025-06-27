#include <stdio.h>

#include <stdlib.h>

float converte(float celsius)
{

    float f = (celsius * 1.8) + 32;

    printf("Graus em celsius %.2f\n", celsius);

    printf("Graus em fahrenheit %.2f\n", f);
}

int main()

{

    float celsius;

    printf("Digite graus celsius : ");

    scanf("%f", &celsius);

    converte(celsius);

    return 0;
}