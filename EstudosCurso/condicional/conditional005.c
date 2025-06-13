#include <stdio.h>

int main()
{
    int n1 , n2;
    printf("Digite seu primeiro número: ");
    scanf("%d" , &n1);
    printf("Digite seu segundo número: ");
    scanf("%d" , &n2);
    if(n1 %2 == 0 || n2 %2 == 0){
        printf("Um dos seus números  ou os dois é/são par/pares  ");
    }else printf("Os dois números são impares");

    return 0;
}
