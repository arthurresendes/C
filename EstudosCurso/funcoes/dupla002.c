#include <stdio.h>

int multiplicacao(int a, int b){
    return a * b;
}

void denovo(){
    printf("1-sim 2-nao");
}

int main(){
    int a;
    int b;
    int opcao;
    do{
    printf("Digite valor de a: ");
    scanf("%d" , &a);

    printf("Digite valor de b: ");
    scanf("%d" , &b);

    printf("Multiplicacao de %d e %d eh: %d \n" , a,b ,multiplicacao( a ,  b));

    printf("Quer fazer denovo ? \n");
    denovo();
    scanf("%d" ,&opcao);
    }while(opcao == 1);

    if(opcao == 2 || opcao > 2 || opcao < 0) printf(" \n Obrigado por visitar nossa calculadora, ate mais....");
    return 0;
}