#include <stdio.h>

int main(){
    int qtd , soma =0;
    printf("Quantos numeros voce quer somar: ");
    scanf("%d" ,&qtd);

    for(int i = 0; i < qtd ; i++){
        soma = soma + i;
    }

    printf("A soma dos numeros foi de %d" , soma);
    return 0;
}

//Coloca o caminho ate a pasta 
//No prompt coloque cd"caminho/pasta"
//Depois de entrar na pasta digite: gcc(Chama o compilador C do GCC) nome_arquivo.c -o nome_arquivo(Define o nome de arquivo de saida , o = output)
//Depois escreva apenas o nome do arquivo(nome_arquivo)