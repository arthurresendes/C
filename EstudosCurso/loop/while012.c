#include <stdio.h>

int main(){
    int idade;
    
    while(1){
        printf("Digite sua idade: (0 para encerrar) ");
        scanf("%d" ,  &idade);

        if(idade == 0){
            printf("Programa encerrado!");
            return 0;
        }else if (idade >= 18){
            printf("Parabens voce e maior de idade com %d anos\n" , idade);
        }else printf("Voce e menor de idade com %d anos\n" , idade );
    }
    return 0;
}