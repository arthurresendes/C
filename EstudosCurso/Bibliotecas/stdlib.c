#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//atof(converte string para double) , atoi(converte string para inteiro) ,atoll(converte string para usgned long long), rand(gera numero aleatorio) , srand(inicializa numero aleatorio), malloc , realloc , calloc , free, qsort(ordena os elementos de um array) , abs() , div(divisao inteira , volta o quiocente)

int main(){
    
    double valor1;
    char valorStr1[100];
    int valor2;
    char valorStr2[100];

    strcpy(valorStr1 , "5.5");

    valor1 = atof(valorStr1);

    strcpy(valorStr2 , "5");

    valor2 = atoi(valorStr2);
    
    printf("\nValor do double passando pelo atof: %.2lf", valor1);
    printf("\nValor do inteiro passando pelo atoi: %d", valor2);
}

