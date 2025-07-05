#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void principal();

int main()
{
    principal();
    return 0;
}

void principal()
{

    char palavra[100];
    int conta = 0;
    printf("\n===========Exercicios===========\n");
    printf("Digite uma frase: \n");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0';
    
    for(int i = 0 ; palavra[i] != '\0' ; i++){
        if(palavra[i] == 'A' || palavra[i] == 'a'){
            conta++;
    }
    }

    printf("Sua frase teve %d A", conta);
    
}
