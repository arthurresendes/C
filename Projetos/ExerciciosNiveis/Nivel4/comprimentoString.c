#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void principal();

int main()
{
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s" , palavra);
    principal(palavra);
    return 0;
}

void principal(char *palavra)
{
    int tamanho = strlen(palavra);
    printf("A palavra tem %d letras" , tamanho);
    
}
