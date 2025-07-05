#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void principal();

int main()
{
    int n1;
    printf("Digite um numero: ");
    scanf("%d" , &n1);
    printf("N1: %d\n", n1);
    principal(&n1);
    return 0;
}

void principal(int *n1)
{
    
    *n1 += 10;
    printf("Novo valor de N1: %d" , *n1);
    
}
