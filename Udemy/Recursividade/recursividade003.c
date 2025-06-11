#include <stdio.h>

int main(){
    int n,i , f = 1;
    printf("Digite o numero que quer fatorial: ");
    scanf("%d" , &n);

    if(n ==0){
        printf("Fatorial inexistente");
    }else{
        for(i = 1; i<=n; i++ ){
            f = f * i;
        }
        printf("O fatorial de %d eh %d" , n ,f);
    }
    return 0;
}
