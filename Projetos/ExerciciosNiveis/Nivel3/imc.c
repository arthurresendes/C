#include <stdio.h>

void principal();

int main()
{
    principal();
    return 0;
}

void principal()
{
    int peso;
    float altura , imc;
    printf("Digite seu peso: ");
    scanf("%d", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    imc = peso/(altura * altura);
    if(imc <= 18.5){
        printf("Voce esta abaixo do peso!!");
    }else if(imc <= 24.9){
        printf("Voce esta no seu peso normal!!");
    }else if(imc <= 29.9){
        printf("Voce esta acima do peso!!");
    }else{
        printf("Voce esta obeso!!");
    }
}
