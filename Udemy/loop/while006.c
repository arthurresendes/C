#include <stdio.h>
#include <string.h>

int main(){
    int senha;
    printf("Digite a senha(4 numeros): ");
    while(1){
        scanf("%d", &senha);
        if(senha == 1234){
            printf("Acesso liberado \n");
            break;
        } else printf("Senha incorreta , fac1a de novo \n");
    }
    return 0;
}