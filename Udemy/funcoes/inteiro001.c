#include <stdio.h>

int numeroInteiro(){
    int numero = 10;
    return numero * 10 - 2;
}

float numeroQuebrado ();


int main()
{
int a;

a = numeroInteiro();


float b;

b = numeroQuebrado();

printf("Valor de a: %d \n" , numeroInteiro());
printf("Valor de b: %.2f" , numeroQuebrado());

    return 0;
}

float numeroQuebrado (){
    float quebrado = 5.5;
    return quebrado * 3;
}