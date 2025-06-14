#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void removerVogal(char *str)
{
    int i, j = 0;                      //i para loop de letra em letra verificando se tem vogal e j atualiza para nova sem vogal
    char novaStr[strlen(str) + 1]; 

    for (i = 0; str[i] != '\0'; i++)
    {
        char c = tolower(str[i]);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
        {
            novaStr[j++] = str[i]; //*
        }
    }

    novaStr[j] = '\0';

    printf("String atualizada(sem vogal): %s\n", novaStr);
}

int main()
{
    int tamanho;
    char *str;

    printf("Digite o tamanho da string: ");
    scanf("%d", &tamanho);
    getchar();

    str = (char *)malloc(tamanho * sizeof(char));
    if (str == NULL)
    {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    printf("Digite a string: ");
    fgets(str, tamanho + 1, stdin);
    str[strcspn(str, "\n")] = '\0';

    removerVogal(str);

    free(str);
    str = NULL;
    return 0;
}
