#include <stdio.h>

int main()

{
    int i = 10, maximo;
    
    printf("Digite o valor maximo: ");
    scanf("%d" , &maximo);
    while(i <= maximo){
        if(i %2 == 0 ){
            printf("   %d \n" , i);
        }
        i +=1;
    }

    return 0;
}
