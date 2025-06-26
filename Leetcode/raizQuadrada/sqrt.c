#include <stdio.h>

#include <math.h>

 

void digiteNumeros(int *n1, int *n2);

 

int main() {

int num1 , num2;

digiteNumeros(&num1,&num2);

 

    return 0;

}

 

 

void digiteNumeros(int *n1 , int *n2){

    printf("Digite numero 1: ");

    scanf("%d", n1);

 

    double raiz1 = sqrt((double)(*n1));

    printf("A raiz quadrada de n1 eh: %.0f\n", floor(raiz1));

 

    printf("Digite numero 2: ");

    scanf("%d", n2);

 

    double raiz2 = sqrt((double)(*n2));

    printf("A raiz quadrada de n2  eh: %.0f\n", floor(raiz2));

}