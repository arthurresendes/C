#include <stdio.h>

void principal();

int main()
{
    principal();
    return 0;
}

void principal()
{
    int soma = 0;
    for(int i = 0 ; i <= 100 ; i = i + 3){
        soma = soma + i;
    }

    printf("Soma de multiplos de 3 ate 100: %d" , soma);

}
