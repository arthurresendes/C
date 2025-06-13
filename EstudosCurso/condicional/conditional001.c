#include <stdio.h>

int main()
{
    int n1;
    printf("Digite seu número: ");
    scanf("%d" , &n1);
    if(n1 >0 && n1 < 10){
        printf("Seu número esta entre 0 e 10");
    }else printf("Não esta entre 0 a 10");

    return 0;
}
