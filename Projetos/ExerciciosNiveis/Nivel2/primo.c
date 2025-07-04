#include <stdio.h>

void principal();

int main()
{
    principal();
    return 0;
}

void principal()
{
    int n1, contador = 0;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    for(int i = 1 ; i <= n1 ; i++){
        if(n1 % i == 0){
            contador++;
        }
    }

    if(contador > 2){
        printf("Nao eh primo\n");
    }else{
        printf("Eh o primo\n");
    }
   
}
