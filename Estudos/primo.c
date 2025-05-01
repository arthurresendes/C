#include <stdio.h>

int main(){
    int i , num , contaDiv;
    printf("Digite um numero: ");
    scanf("%d" , &num);
    for(i = 1 ; i <=num ; i++){
        if(num % i == 0){
            contaDiv++;
        }
    }
    if(contaDiv > 2){
        printf("Esse numero nao e primo");
    }else printf("Esse numero e primo");
    return 0;
}