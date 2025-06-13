#include <stdio.h>

int main()
{
    double n1 , n2 , soma;
    printf("Digite o número 1: ");
    scanf("%lf" , &n1);
    printf("Digite o número 2: ");
    scanf("%lf" , &n2);
    soma = n1 + n2;
    if(soma > 10){
        printf("Seu número é maior que 10");
    } else if ( soma < 10){
        printf("Seu número é menor que 10");
    } else printf("Seu número é igual a 10");

    return 0;
}