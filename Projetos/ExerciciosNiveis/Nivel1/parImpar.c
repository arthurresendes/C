#include <stdio.h>

void principal();

int main()
{
    principal();
    return 0;
}

void principal()
{
    int n1;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    if(n1 % 2 == 0){
        printf("Seu numero eh par!!");
    }else{
        printf("Seu numero eh impar!!");
    }
}
