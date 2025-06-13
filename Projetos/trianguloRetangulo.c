#include <stdio.h>


void imprimeFor(int n){
    for(int i = 0 ; i <= n ; i++){
        for(int j = 0 ; j <= i ; j++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    imprimeFor(5);
    return 0;
}

