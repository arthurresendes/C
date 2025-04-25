#include <stdio.h>

#define TAM 2

int main(){
// o  vetor é
    int vetorDeInt[] = {1,2,3,4}; 
    float vetorDeFloat [] = {1.5, 2.2, 3.0};
    char vetorDeChar [TAM] = {'a', 'b'};

    //modeificando o valor do vetor
    vetorDeInt[0] = 9;

    //modificando o valor com variavel
    float novoValor = 5.0;
    vetorDeFloat[2] = novoValor;

    //Usuario modifica o valor do vetor
    printf("Digite uma letra nova: ");
    fflush(stdin);
    scanf("%c", &vetorDeChar[0]);

    int i ;
    printf("Vetor de int: \n");
    for(i = 0 ; i < 4 ; i++){
        printf("%d \n", vetorDeInt[i]);
    }

    printf("Vetor de float: \n");
    for(i = 0 ; i < 3 ; i++){
        printf("%f \n", vetorDeFloat[i]);
    }
    printf("Vetor de int: \n");
    for(i = 0 ; i < TAM ; i++){
        printf("%c \n", vetorDeChar[i]);
    }

    return 0;
}