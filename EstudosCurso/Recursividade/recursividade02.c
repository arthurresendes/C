#include <stdio.h>

int main(){
    int n,i , s = 0;
    printf("Digite um numero: ");
    scanf("%d" , &n);
    if(n == 0){
        printf("Numero igual a 0");
    }else{
        for(i = 0 ; i <= n ; i++){
            s = s + i;
        }
        printf("A soma dos até numeros %d eh de %d" , n ,s);
    }
    return 0;
}

