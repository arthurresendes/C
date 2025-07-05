#include <stdio.h>

long long potencia(int base, int expoente);

int main(void)
{
    int base, exp;
    long long resultado;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente (inteiro ≥ 0): ");
    scanf("%d", &exp);

    resultado = potencia(base, exp);

    printf("%d ^ %d = %lld\n", base, exp, resultado);

    return 0;
}

long long potencia(int base, int expoente)
{
    long long acumulador = 1;        // começa em 1, pois qualquer número^0 = 1

    for (int i = 0; i < expoente; i++)
        acumulador *= base;          // multiplica 'base' a cada passo

    return acumulador;
}
