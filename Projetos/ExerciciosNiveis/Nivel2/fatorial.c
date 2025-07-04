#include <stdio.h>

void principal();

int main()
{
    principal();
    return 0;
}

void principal()
{
    int n1, f =1;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    for(int i = 1 ; i <= n1 ; i++){
        f = f * i;
    }

    printf("Fatorial eh %d" , f);
}
