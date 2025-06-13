#include <stdio.h>

int main(){
    int n;
    
    //Declarando o ponteiro pelo *
    int* p; //Ponteiro é um valor que aponta para um endereço de memoria

    printf("Digite um numero: ");
    scanf("%d" , &n);

    p = &n;

    printf("O numero informado foi %d \n" , n);
    printf("O endereço de memoria: %d \n" , &n); // Cada vez que é digitado um numero o endereço de memoria muda
    printf("Endereço do ponteiro: %p \n" , p);
}

