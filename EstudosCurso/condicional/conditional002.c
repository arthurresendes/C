#include <stdio.h>

int main()
{
    int n1 , n2 , n3;
    printf("Digite seu primeiro número: ");
    scanf("%d" , &n1);
    printf("Digite seu segundo número: ");
    scanf("%d" , &n2);
    printf("Digite seu terceiro número: ");
    scanf("%d" , &n3);
    if(n1 > 10 && n2 > 10 && n3 > 10){
        printf("Seus números são maiores que 10");
    }else printf("Não são maiores que 10");

    return 0;
}
