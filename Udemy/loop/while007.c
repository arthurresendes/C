#include <stdio.h>

int main(){
    int i , soma = 0;
    printf("Digite um numero: ");
    while(1){
        scanf("%d", &i);
        if(i == 0)
            break;
            soma +=i;
    }
    printf("Soma igual a %d", soma);
    return 0;
}