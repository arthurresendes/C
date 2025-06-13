#include <stdio.h>
#include <math.h>

int main(){
    float a = 9.7;
    printf("Arredondando para cima o valor %.2f para %lf\n" , a  , ceil(a));
    printf("Arredondando para baixo o valor %.2f para %lf\n" , a  , floor(a));
    return 0;
}

