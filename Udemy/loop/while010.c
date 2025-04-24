#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int jogador , computador;
    int pontoJogador = 0 , pontoComputador = 0;
    srand(time(NULL));
    while(pontoJogador < 5 && pontoComputador < 5){
        printf("Digite um numero entre 1 e 6: ");
        scanf("%d" , &jogador);
        computador = rand() % 6 + 1;
        printf("Computador: %d\n" , computador);
        if(jogador > computador){
            pontoJogador++;
            printf("Voce ganhou!\n");
        }else if (jogador < computador){
            pontoComputador++;
            printf("Voce perdeu!\n");
        } else {
            printf("Empate \n");
        }
        printf("Ponto do jogador: %d x Ponto do computador: %d\n" , pontoJogador , pontoComputador);
    }

    return 0;
}