#include <stdio.h>
#include <math.h> 

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    double raiz = sqrt(num);

    if (raiz == (int)raiz) {
        printf("A raiz quadrada de %d e exata com o valor de  %.2lf.\n", num , raiz);
    } else {
        printf("A raiz quadrada de %d nao e exata com o valor de  %.2lf.\n", num , raiz);
    }
    return 0;
}