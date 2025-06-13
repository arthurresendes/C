#include <stdio.h>

#include <string.h>

 

struct palavra{

    int ordem;

    char letra;

    char texto[255];

};

 

int main()

{

    struct palavra primeiraParte;

    primeiraParte.ordem = 10;

    primeiraParte.letra = 'a';

    strcpy(primeiraParte.texto , "palavrinha");

    printf("%d -- %c -- %s \n" , primeiraParte.ordem , primeiraParte.letra , primeiraParte.texto);

   

    

    struct palavra listaPalavras[3];

    listaPalavras[0].ordem = 1;

    listaPalavras[1].ordem = 2;

    listaPalavras[2].ordem = 3;

 

    listaPalavras[0].letra = 'a';

    listaPalavras[1].letra = 'b';

    listaPalavras[2].letra = 'c';

 

    strcpy(listaPalavras[0].texto, "Legal");

    strcpy(listaPalavras[1].texto, "Dahora");

    strcpy(listaPalavras[2].texto, "Boa");

 

    int i;

    for (i = 0; i < 3; i++) {

        printf("%d -- %c -- %s\n", listaPalavras[i].ordem, listaPalavras[i].letra, listaPalavras[i].texto);

    }

    return 0;

}