#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define limite 3

void principal();

int main()
{
    principal();
    return 0;
}

void principal()
{
    int tentativas = 0;
    char senha_digitada[20];
    char senha_confirmada[20];

    while (tentativas < limite)
    {
        printf("Digite a senha: ");
        scanf("%19s", senha_digitada);
        printf("Confirme a senha: ");
        scanf("%19s", senha_confirmada);

        if (strcmp(senha_digitada, senha_confirmada) == 0)
        {
            printf("Senhas iguais!!");
            exit(0);
        }
        else
        {
            tentativas++;
            printf("Senha incorreta. Tentativa %d de %d.\n",
                   tentativas, limite);
        }
    }
    printf("Numero máximo de tentativas excedido. Acesso negado.\n");
}
