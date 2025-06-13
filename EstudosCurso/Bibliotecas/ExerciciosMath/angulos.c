#include <stdio.h>
#include <math.h>

int main(){
    int angulo = 45;
    float res = cos(angulo);
    float seno = sin(angulo);
    float tg = tang(angulo);
    printf("O cosseno de %d eh %f" , angulo , res);
    printf("O seno de %d eh %f" , angulo , seno);
    printf("A tangente de %d eh %f" , angulo , tg);
    return 0;
}

