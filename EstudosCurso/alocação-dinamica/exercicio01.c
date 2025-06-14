#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeros[5] , *p; //Criacao de vetor fixo com 5 numeros e um ponteiro p
    p = (int *)calloc(5 , sizeof(int)); //Ponteiro p é igual a um int que aloca 5 numeros com bytes de um int que é 4

    for(int i = 0 ; i < 5; i++ ){
        printf("Digite valor de numero %d: " , i+1);
        scanf("%d" , &p[i]);
    }
    for(int i = 0 ; i < 5; i++ ){
        printf("O valor de numero %d foi %d\n" , i+1 , p[i]);
    }

    printf("Total de bytes alocados na memoria foi: %ld bytes" , 5 * sizeof(int)); //Mostra valor total de bytes

    free(p); //libera
    p = NULL ; //metodo de segurança
    
    return 0;
}

