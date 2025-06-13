#include <stdio.h>
#include <time.h>

int main()
{
    int chute , segredo;
    srand(time(NULL)); // Só deve ser chamada uma única vez
    segredo = rand() % 100 + 1;    // Retorna um número inteiro pseudo-aleatório entre 0 and RAND_MAX
    printf("Adivinhe um numero de 1 a 100: ");
    while(1){
        scanf("%d",&chute);
        if(chute == segredo){
            printf("Parabens , voce acertou o numero %d" , segredo);
            break;
        } else if(chute < segredo){
            printf("Numero muito baixo , tente novamente:");
        } else printf("Numero muito alto , tente novamente: ");
    }
    return 0;
}