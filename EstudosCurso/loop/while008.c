#include <stdio.h>

int main(){
    int num , contador=0;
    printf("Digite um numero: ");
    while (1){
        scanf("%d", &num);
        if(num < 0)
            break;
        contador++;
    }
    printf("Numeros positivos = %d" , contador);
    return 0;
}