#include <stdio.h>

void principal();

int main()
{
    principal();
    return 0;
}

void principal()
{
    int n1, n2 ,n3;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);
    n3 = n1;
    n1 = n2;
    n2 = n3;
    printf("Valor de N1: %d\nValor de N2: %d\n" , n1 , n2);
    
    
}
