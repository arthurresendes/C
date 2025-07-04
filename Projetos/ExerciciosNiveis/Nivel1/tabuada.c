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
    for(int i = 1 ; i <= 10 ; i++){
        printf("%d * %d = %d\n" , n1, i, n1 *i);
    }
}
