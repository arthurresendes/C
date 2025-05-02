#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavraChar[100];
    printf("Digite a palavra: ");
    fgets(palavraChar, sizeof(palavraChar), stdin);
    puts(palavraChar);

    char palavra[100];
    printf("Escolha oq quer retirar: ");
    fgets(palavra, sizeof(palavra), stdin);
    char *pos = strstr(palavraChar, palavra); // encontra o trecho

    if (pos != NULL) {
        memmove(pos, pos + strlen(palavra), strlen(pos + strlen(palavra)) + 1);
        printf("Resultado: %s\n", palavraChar);
    } else {
        printf("Trecho não encontrado.\n");
    }
    return 0;
}