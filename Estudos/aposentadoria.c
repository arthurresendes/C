#include <stdio.h>

int main()
{
    char nome [50];
    int atual , nasc , idade , apos;
    printf("Digite seu nome: ");
    scanf ("%s", nome);
    printf("Digite o ano atual: ");
    scanf("%d" , &atual);
    printf("Digite o ano de nascimento: ");
    scanf("%d" , &nasc);
    idade = atual - nasc;
    apos= 65;
    apos = apos - idade;
    if (idade >= 65){
        printf("Você deve se aposentar %s , pois você tem %d anos" , nome , idade);
    } else {
        printf("Voce tem %d , %s, assim falta %d anos para se aposentar",idade, nome, apos);
    }

    return 0;
}
