#include <stdio.h>

int main(){
    int numinicio , numfinal, i , pular;
    printf("Digite o numero inicial: ");
    scanf("%d" , &numinicio);
    printf("Digite o numero final: ");
    scanf("%d" , &numfinal);
    printf("Digite o numero de quanto em quanto ira ir: ");
    scanf("%d" , &pular);
    for(i = numinicio ; i <= numfinal ; i = i + pular){
        printf("%d\n" , i);
    }

    for(i = numfinal ; i >= numinicio ; i = i- pular){
        printf("\n %d" , i);
    }
    return 0;
}