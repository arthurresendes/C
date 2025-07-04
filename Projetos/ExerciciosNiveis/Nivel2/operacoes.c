#include <stdio.h>

void principal();

int main()
{
    principal();
    return 0;
}

void principal()
{
    int n1, n2, res;
    char opcao;
    printf("\n===========Exercicios===========\n");
    printf("Digite numero 1: ");
    scanf("%d", &n1);
    printf("Digite numero 2: ");
    scanf("%d", &n2);
    printf("=======Escolha uma opcao para calcular========\n");
    printf("+\n-\n*\n/\n");
    scanf(" %c" , &opcao);
    switch(opcao){
        case '+':
        res = n1 + n2;
        printf("%d + %d = %d" , n1 , n2 ,res);
        break;
        case '-':
        res = n1 - n2;
        printf("%d - %d = %d" , n1 , n2 ,res);
        break;
        case '*':
        res = n1 * n2;
        printf("%d * %d = %d" , n1 , n2 ,res);
        break;
        case '/':
        res = n1 / n2;
        printf("%d / %d = %d" , n1 , n2 ,res);
        break;
        default:
        printf("Nenhum campo reconhecido!!");
        principal();

    }
    
}
