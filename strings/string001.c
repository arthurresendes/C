#include <stdio.h>

int main(){
    //Definindo strings de forma variada , com e sem o '\0' no final. O '\0' é o terminador de string, indicando o final da string.
    //O compilador não aceita strings sem o '\0' no final, pois não sabe onde termina a string.

    char palavra1[] = "boi";
    char palavra2[5] = "bala";
    char palavra3[] = {'a' , 'b' , 'c', 'd' , '\0'};
    char palavra4[5] = {'f' , 'o' , 'n' , 'e', '\0'};
    
    //imprimindo string sem espaço
    printf("%s \n" , palavra1);

    printf("Digite uma palavra com ate 4 letras: ");
    fflush(stdin); //Limpa o buffer de entrada, para evitar que o \n fique no buffer e atrapalhe a leitura da string.
    scanf("%s", palavra2); 

    //Lendo strings com espaço
    char fruta[255];
    fflush(stdin); 
    printf("Digite uma fruta: ");
    fgets(fruta , sizeof(fruta) , stdin);

    //Imprimindo a fruta lida com espaço
    printf("A fruta lida foi:");
    puts(fruta); //puts imprime a string e pula uma linha no final.
    return 0;
}