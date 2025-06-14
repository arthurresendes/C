#include <stdio.h>
#include <stdlib.h>

int main(){
    int qtd, *p;
    printf("Digite a quantidade de elementos: ");
    scanf("%d" , &qtd);
    p = (int*)malloc(qtd * sizeof(int));

    for(int i = 0 ; i <qtd ; i++){
        printf("Digite o valor do numero %d: " , i+1);
        scanf("%d" ,  &p[i]);
    }
    for(int i = 0 ; i <qtd ; i++){
        printf("Numero %d vale %d e ocupa %ld bytes em memoria \n",i+1 , p[i] , sizeof(p[i]));
    }
    return 0;
}

