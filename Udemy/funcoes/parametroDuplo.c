#include <stdio.h>
#include <stdlib.h>

void mostraSoma(int numero , int segundoNumero){
    printf("Os valores sao %d e %d " , numero, segundoNumero );
}

int resultadoSoma(int numero , int segundoNumero){
    return numero + segundoNumero;
}

int main()
{
    int a = 5 , b = 7;


    mostraSoma(a, b);

    printf("A soma eh %d " , resultadoSoma(a,b));

    


    return 0;
}