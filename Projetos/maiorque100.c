#include <stdio.h>

int main(){
    int i , num , numContagem;
    for(i = 0 ; i < 10 ; i++ ){
        printf("Digite o valor do num %d " , i+1);
        scanf("%d" , &num);
        if(num > 100){
            numContagem ++;
        }
    
    }
    printf("Temos %d numeros maior que 100 " , numContagem );
    return 0;
}