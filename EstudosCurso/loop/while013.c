#include <stdio.h>

int main(){
    int i = 0;
    int vetorInt[6];
    while(i < 6){
        printf("Digite um numero: ");
        scanf("%d", &vetorInt[i]);
        i++;
    }

    printf("\nValores digitados:\n");
    i = 0;

    while(i < 6){
        printf("%d\n", vetorInt[i]);
        i++;
    }
    return 0;
}