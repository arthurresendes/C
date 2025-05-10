#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int numeroAleatorio(){
    return rand() % 100 + 1;
 }

int main(){
    srand(time(NULL));
    int opcao;
    do{
    printf("%d \n" , numeroAleatorio());
    printf("Quer outro ? (1-sim 2-nao)");
    scanf("%d" ,&opcao);
    }while(opcao == 1);
    return 0;
}