#include <stdio.h>
#include <stdlib.h>

int compara(int *x , int *y){
    if(*x > *y){
        return 1;
    }else if(*x == *y){
        return 0;
    }else{
        return -1;
    }
}

int main(){
    int numeros[] = {6,3,1,9,5,12};
    qsort(numeros , 6 , sizeof(int) , (void * ) compara);
    for(int i = 0 ; i < 6 ; i++ ){
        printf("%d\n" , numeros[i]);
    }
    return 0;
}

