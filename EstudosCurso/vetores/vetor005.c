#include <stdio.h>

int main(){
    int i;
    int vetorInt[5];
    for(i = 0 ; i < 5 ; i++){
        printf("Digite os numero %d \n" , i+1);
        scanf("%d" , &vetorInt[i]);
    }

    int maior = vetorInt[0];
    int menor = vetorInt[0];

    for(i = 1 ; i < 5 ; i++){
        if(vetorInt[i] > maior){
            maior = vetorInt[i];
        } if(vetorInt[i] < menor){
            menor = vetorInt[i];
        }
    }

    printf("O valor maior e : %d \n" , maior);
    printf("O valor menor e : %d" , menor);

    return 0;
}