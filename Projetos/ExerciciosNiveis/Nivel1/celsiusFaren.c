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
    float n2;
    printf("Digite a temperatura: ");
    scanf("%d", &n1);
    n2 = (n1 * 1.8) + 32;
    printf("Graus em C: %d\n Graus em F: %.2f\n" , n1 , n2);
    
}
