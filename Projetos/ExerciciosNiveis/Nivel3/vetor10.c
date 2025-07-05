#include <stdio.h>

void principal();

int main()
{
    principal();
    return 0;
}

void principal()
{
    int n1[10];
    int soma = 0; 
    float media;
    for(int i = 0; i < 10 ; i++){
        printf("Digite o numero na posicao [%d]: ", i);
        scanf("%d" , &n1[i]);
        soma = soma + n1[i];
    }

    media = soma/10;
    printf("A media aritmetica dos dez numeros eh: %.2f" ,media);
    
}
