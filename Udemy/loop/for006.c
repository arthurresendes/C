#include <stdio.h>

int main()
{
    int i, num , fatorial = 1;
    printf("Digite um número: ");
    scanf("%d" , &num);
    for(i = 1 ; i <= num ; i++){
        fatorial *=  i;
        printf("O número fatorial = %d \n" , fatorial);
    }

    return 0;
}
