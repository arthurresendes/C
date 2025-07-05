#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void principal();

int main()
{
    principal();
    return 0;
}

void principal()
{
    char palavra[100];
    int i , j;
    char temp;
    char guarda[100];

    printf("Digite uma palavra: ");
    scanf("%s" , palavra);
    strcpy(guarda , palavra);

    int tamanho = strlen(palavra);

    for( i = 0 , j = tamanho -1 ; i< j ; i++,j-- ){
        temp = palavra[i];
        palavra[i] = palavra[j];
        palavra[j] = temp;
    }

    printf("Palavra invertida: %s\n" , palavra);

    if(strcmp(guarda, palavra) == 0 ){
        printf("Eh um palindromo!!");
    }else{
        printf("Nao eh palindromo!!");
    }
    
}
