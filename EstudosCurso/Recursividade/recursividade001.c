#include <stdio.h>

int fib(int n){
    if(n ==0 ){
        return 0;
    }

    if(n ==1){
        return 1;
    }

    return fib(n-1) + fib(n-2);
}

int main(){
    int qtd;
    printf("Informe o tamanho da sequencia fibonacci: ");
    scanf("%d" , &qtd);

    for(int i = 0 ; i < qtd ; i++){
        printf("%d" , fib(i+1));
    }
    return 0;
}
