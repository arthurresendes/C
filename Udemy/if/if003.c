#include <stdio.h>

int main()
{
    int n1, n2, n3;
    printf("Iremos ver de acordo com o valor n1 , n2 e n3 qual triangulo sera formado: \n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);
    if (n1 + n2 > n3 && n1 + n3 > n2 && n2 + n3 > n1)
    {
        if (n1 == n2 && n2 == n3)
        {
            printf("Seu triangulo e equiltero\n");
        }
        else if (n1 == n2 || n1 == n3 || n2 == n3)
        {
            printf("Seu triangulo e isoceles");
        }
        else
        {
            printf("Seu triangulo e escaleno");
        }
    }
    else
        while (n1 + n2 <= n3 || n1 + n3 <= n2 || n2 + n3 <= n1)
        {
            printf("Os valores digitados nao formam um triangulo\n");
            printf("Digite o primeiro numero: ");
            scanf("%d", &n1);
            printf("Digite o segundo numero: ");
            scanf("%d", &n2);
            printf("Digite o terceiro numero: ");
            scanf("%d", &n3);
            if (n1 + n2 > n3 && n1 + n3 > n2 && n2 + n3 > n1)
            {
                if (n1 == n2 && n2 == n3)
                {
                    printf("Seu triangulo e equiltero\n");
                }
                else if (n1 == n2 || n1 == n3 || n2 == n3)
                {
                    printf("Seu triangulo e isoceles");
                }
                else
                {
                    printf("Seu triangulo e escaleno");
                }
            }
        }

    return 0;
}