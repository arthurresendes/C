#include <stdio.h>

int main()
{
    int n1 , n2 ;
    printf("Digite o número 1: ");
    scanf("%d" , &n1);
    printf("Digite o número 2: ");
    scanf("%d" , &n2);
    if(n1 > n2){
        printf("O 1 número é maior que número 2");
    } else if ( n1 < n2){
        printf("O 2 número é maior que número 1");
    } else printf("Seu número 1 igual a número 2");

    return 0;
}