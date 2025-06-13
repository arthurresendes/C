#include <stdio.h>

int main(){
    int tamanho;

    printf("Digite quantas provas voce teve : ");
    scanf("%d", &tamanho);

    float vetor[tamanho] , soma = 0.0;

    for( int i = 0 ; i < tamanho ; i++){
        printf("Digite as notas das provas[%d]: ", i);
        scanf("%f", &vetor[i]);
        soma +=vetor[i];
    }

    for(int i = 0 ; i < tamanho ; i++){
        printf("Notas das provas[%d]: %.2f \n", i, vetor[i]);
    }

    printf("A soma das notas e %.2f \n E sua media e: %.2f \n" , soma , soma / tamanho);
    if(soma / tamanho >= 6.0){
        printf("Aprovado \n");
    }else printf("Reprovado \n");
    return 0;
}