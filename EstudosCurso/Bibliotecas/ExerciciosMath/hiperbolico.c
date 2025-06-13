#include <stdio.h>
#include <math.h>

int main(){
    int angulo = 45;
    float res = cosh(angulo);
    float seno = sinh(angulo);
    float tg = tanh(angulo);
    printf("O cosseno de %d eh %f" , angulo , res);
    printf("\nO seno de %d eh %f" , angulo , seno);
    printf("\nA tangente de %d eh %f" , angulo , tg);
    return 0;
}

