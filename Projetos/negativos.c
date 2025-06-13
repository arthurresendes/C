#include <stdio.h>

int main(){
    int i , totalN = 0 , num;

    for(i = 0 ; i < 5 ; i++){
        printf("Digite um numero :");
        scanf("%d" , &num);
        if(num < 0){
            totalN = totalN+1;
        }
    }
    printf("O total de valores negativos foram %d" , totalN);
    return 0;
}