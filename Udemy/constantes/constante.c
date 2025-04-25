#include <stdio.h>
#include <stdlib.h>

#define CONSTANTE 5
#define QUEBRADO 9.3
#define LETRA 'A'

//Constantes são definidas com #define e não podem ser alteradas durante a execução do programa, sendo uteis para definir valores fixos que não devem ser alterados.

int main(){
    const int LADO =10;

    printf("A constante é: %d \n", CONSTANTE);
    printf("A constante quebrada é: %.2f \n", QUEBRADO);
    printf("A constante letra é: %c \n", LETRA);
    printf("A constante lado é: %d \n", LADO);
    return 0;
}