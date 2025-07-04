#include <stdio.h>

void principal();

int main()
{
    principal();
    return 0;
}

void principal()
{
    int n1, n2, n3;
    float res;
    printf("Digite primeira nota: ");
    scanf("%d", &n1);
    printf("Digite segunda nota numero: ");
    scanf("%d", &n2);
    printf("Digite terceira nota numero: ");
    scanf("%d", &n3);
    res = (n1+n2+n3)/3;
    printf("(%d + %d + %d) / 3 = %.2f\n", n1, n2,n3, res);
    if(res >= 6){
        printf("Aprovado!!");
    }else{
        printf("Reprovado!!");
    }
}
