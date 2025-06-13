#include <stdio.h>

int main()
{
    int i, vl , vs, inter;
    printf("Digite o valor inicial: ");
    scanf("%d" ,  &vl);
    printf("Digite o valor final: ");
    scanf("%d" ,  &vs);
    printf("Digite o intervalo: ");
    scanf("%d" ,  &inter);
    for(i = vl ; i <= vs; i= i + inter ){
        printf("O valor inicial %d , o valor final %d e o seu intervalo  %d \n" , vl , vs , i);
    }
    

    return 0;
}
