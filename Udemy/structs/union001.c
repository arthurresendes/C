#include <stdio.h>
#include <string.h>

union pessoa{ //Nao importe quantas variaveis coloque , ira ocupar apenas o espaço da maior variavel no caso , o 100 do char nome
    char nome[100];
    int idade;
};

int main(){
    union pessoa p;

    strcpy(p.nome , "Arthur Resende"); //   Copia o Arthur Resende para nome

    printf("Dados de %s\n" , p.nome);

    p.idade = 18;
    printf("Ele tem %d anos" , p.idade);

    printf("\n A variavel 'p' esta ocupando %ld bytes em memoria" , sizeof(p));
    return 0;
}

