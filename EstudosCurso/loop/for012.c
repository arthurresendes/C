#include <stdio.h>

int main(){
    int i ,num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    for (i = 1 ; i <= num ; i++){
        if(num % i == 0){
            printf("Seu numero %d / %d tem o resto = %d  primo \n" ,num ,i , num%i);
        }else
        printf("Seu numero %d / %d tem o resto = %d  primo \n" ,num ,i , num%i);
    }
    return 0;
}