#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1 = -10;
    int absoluto =  abs(n1);
    int n2 = 23;
    int n3 = 2;

    div_t quiocente = div(n2 , n3);
    printf("\nValor de n1 eh: %d" , n1);
    printf("\nValor absoluto de n1 eh: %d" , absoluto);
    printf("\nQuiocente de n2(%d) e de n3(%d) eh: %d" ,n2,n3, quiocente.rem);
    return 0;
}

