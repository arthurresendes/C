#include <stdio.h>

int main()
{
    int n;
    printf("Digite um número: ");
    scanf("%d" , &n);
    if(n %2 == 0){
        printf("O número é par");
    } else printf("O número é impar");

    return 0;
}