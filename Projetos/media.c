#include <stdio.h>

int main()
{
    double n1, n2 , media;
    printf("Digite sua primeira nota: ");
    scanf("%lf" , &n1);
    printf("Digite sua segunda nota: ");
    scanf("%lf" , &n2);
    media = (n1 + n2)/2;
    if(media >= 6){
        printf("Você foi aprovado %.1lf", media);
    } else printf("Você foi aprovado %.1lf", media);
    return 0;
}