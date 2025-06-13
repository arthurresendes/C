#include <stdio.h>

int main(){
    float soma = 0.0 ,  media = 0.0;
    float vetorDeFloat[3];
    printf("Digite sua primeira nota: ");
    scanf("%f" , &vetorDeFloat[0]);
    printf("Digite sua segunda nota: ");
    scanf("%f" , &vetorDeFloat[1]);
    printf("Digite sua terceira nota: ");
    scanf("%f" , &vetorDeFloat[2]);
    soma = vetorDeFloat[0] + vetorDeFloat[1] + vetorDeFloat[2];
    media = soma /3;
    printf("A soma das notas e: %.2f \n", soma);
    printf("A media das notas e: %.2f \n", media);
    if(media >= 6.0){
        printf("Aprovado \n");
    }else printf("Reprovado \n");
    return 0;
}