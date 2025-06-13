#include <stdio.h>

int main()
{
    double nota;
    printf("Digite sua nota: ");
    scanf("%lf" , &nota);
    if(nota >= 9){
        printf("Você tirou %.2lf , excelente" , nota);
    } else if(nota >= 7){
        printf("Você tirou %.2lf ,bom" , nota);
    }else if (nota >= 6){
        printf("Você tirou %.2lf , na média" , nota);
    } else printf("Você tirou %.2lf , nota insuficiente" , nota);

    return 0;
}
