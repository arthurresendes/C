#include <stdio.h>

int main(){
    int num;
    int soma = 0;
    int vetorInt[10];
    for(int i = 0 ; i < 10 ; i++){
        printf("Digite os valor %d: " , i+1);
        scanf("%d" , &num);
        vetorInt[i] = num;
    }

    for(int i =0 ; i < 10 ; i++){
        printf("Os numeros sao %d \n" , vetorInt[i]);
        soma += vetorInt[i];
        printf("A soma de todos os numeros sao %d \n" , soma);
    }
    return 0;
}