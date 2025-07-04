#include <stdlib.h>

#include <stdio.h>

 

void digite();

 

int main() {

    digite();

    return 0;

}

 

void digite() {

    int num;

    int guardaNum[100]; // vetor para guardar os divisores

    int contador = 0;   // controla quantos divisores foram encontrados

 

    printf("Digite um numero: ");

    scanf("%d", &num);

 

    printf("Divisores de %d: ", num);

    for (int i = 1; i <= num; i++) {

        if (num % i == 0) {

            guardaNum[contador] = i; // guarda o divisor

            contador++;

        }

    }

 

    // exibe os divisores armazenados

    for (int i = 0; i < contador; i++) {

        printf("%d ", guardaNum[i]);

    }

    printf("\n");

}