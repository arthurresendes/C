#include <stdio.h>

int main(){
    int i ;
    int num;
    printf("Defina ate quando vai seu loop ");
    scanf("%d" , &num);
    int vetorInt[num];
    for(i = 0 ; i < num ; i++){
        printf("Digite um numero : ");
        scanf("%d" , &vetorInt[i]);
    }

    for(i = num - 1 ; i >= 0 ; i--){
        printf("O vetor ao contrario e %d \n" , vetorInt[i]);
    }
    return 0;
}