#include <stdio.h>

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    double raiz = sqrt(num);

    if (raiz == (int)raiz) {
        printf("A raiz quadrada de %d e exata.\n", num);
    } else {
        printf("A raiz quadrada de %d nao e exata.\n", num);
    }
    return 0;
}