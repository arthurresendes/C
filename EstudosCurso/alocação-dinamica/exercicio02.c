#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p = NULL;
    int tamanho_inicial = 3;
    int qtd;

    p = (int *)malloc(tamanho_inicial * sizeof(int));

    printf("Digite quantos numeros quer alocar: ");
    scanf("%d", &qtd);

    if(qtd > tamanho_inicial){
        int *temp = realloc(p , qtd * sizeof(int));
        p = temp;
    }

    for(int i = 0 ; i < qtd ; i++ ){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &p[i]);
    }

    for(int i = 0 ; i < qtd ; i++ ){
        printf("Valor %d eh %d\n", i + 1 , p[i]);
    }

    free(p);
    p = NULL;
    return 0;
}

