#include <stdio.h>
#include <stdlib.h>

void principal();

int main()
{
    principal();
    return 0;
}

void principal()
{
    int qtd , *num;

    printf("Digite a quantidade de numeros a adicionar: ");
    scanf("%d" , &qtd);
    num = (int *)malloc(qtd * sizeof(int));

    for(int i = 0; i < qtd ; i++){
        printf("Digite o valor[%d]: " , i+1);
        scanf("%d" , &num[i]);
    }

    for(int i = 0; i < qtd ; i++){
        printf("[%d] = %d\n" , i+1 , num[i]);
    }

    free(num);
    num = NULL;
    

}
