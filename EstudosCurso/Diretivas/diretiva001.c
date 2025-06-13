#include <stdio.h>

//indef - Diretivas de compilação
//Nao conseguimos alterar valor de constante, ao menso que usamos #ifndef

#ifndef PI
    #define PI 3.14567
#endif

int main(){
    printf("%f" , PI);
    printf("\n Alterando constante %f" , 2 * PI);
    return 0;
}

