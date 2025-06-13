#include <stdio.h>

int main()
{
    double saldo , valor , saque;
    printf("Digite seu saldo: ");
    scanf("%lf", &saldo);
    printf("Qual valor do saque: ");
    scanf("%lf", &saque);
    valor = saldo - saque;
    if (saldo <= saque ){
        printf("Você pode sacar o seu saldo agora será %lf" , valor);
    } else printf("Você nao pode sacar");

    return 0;
}