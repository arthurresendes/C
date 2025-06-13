#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n1;
    printf("Digite um numero: ");
    scanf("%d" , &n1);
    srand(time(NULL));
    int aleatorio = rand() %7;
    printf("Numero maquina :%d\n" , aleatorio);
    if(n1 > aleatorio){
        printf("Voce venceu!!");
    }else{
        printf("Voce perdeu");
    }
    return 0;
}

