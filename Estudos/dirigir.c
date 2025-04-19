#include <stdio.h>

int main()
{
    char nome [150];
    int idade , nasc , atual;
    printf("Digite seu nome completo: ");
    scanf("%s" , nome);
    printf("Digite o ano atual: ");
    scanf ("%d", &atual);  
    printf("Digite o ano de nascimento: ");
    scanf("%d", &nasc);
    idade = atual - nasc;
    if (idade >= 18){
        printf("Você pode dirigir, pois voce tem %d anos , %s" , idade , nome);
    }
    else printf("Você nao pode dirigir, pois você tem %d anos , %s" , idade , nome);
    return 0;
}