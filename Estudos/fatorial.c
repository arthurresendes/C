#include <stdio.h>

int main()
{
    float i, num, f = 1;
    printf("Digite um numero: ");
    scanf("%f", &num);

    if (num <= 0)
    {
        printf("Fatorial inexistente");
    }else{
        for (i = 1; i <= num; i++)
        {
            f = f * i;
        }
        printf("O fatorial de %.0f e %.3f" , num , f);
    } 
    return 0;
}