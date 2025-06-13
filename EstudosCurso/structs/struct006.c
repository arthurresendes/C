#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct pessoas
{
    char nome[100];
    char idade[20];
};

int proibeNum(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isdigit(str[i])  && str[i] != ' ' && str[i] != '\n')
        {
            return 0;
        }
    }
    return 1;
}

int proibeLetra(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (!isdigit(str[i]) && str[i] != '\n')
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    
    struct pessoas p;
    int idadeNum;
    system("cls");
    do
    {
        printf("Digite seu nome: ");
        fgets(p.nome, sizeof(p.nome), stdin);
    } while (!proibeNum(p.nome) || strlen(p.nome) == 0);
    p.nome[strcspn(p.nome, "\n")] = '\0';
    do{
    printf("Digite sua idade: ");
    fgets(p.idade, sizeof(p.idade), stdin);
    }while(!proibeLetra(p.idade) || strlen(p.idade) == 0);
    idadeNum = atoi(p.idade);
    system("cls");
    printf("Seu nome é %s e voce tem %s anos ", p.nome, p.idade);
    return 0;
}
