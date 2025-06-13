#include <stdio.h>
#include <ctype.h>

int main(){
    char teste = '4';
    char teste2 = 'c';
    char teste3 = 'C';
    char teste4 = 'É';
    char teste5 = ' ';

    if(isalnum(teste)){
        printf("Eh alfanumerico \n");
    }else{
        printf("Não eh alfanumerico \n");
    }

    if(isdigit(teste)){
        printf("Eh um digito \n");
    }else{
        printf("Nao eh um digito \n");
    }

    if(isalpha(teste)){
        printf("Eh um caractere \n");
    }else{
        printf("Nao eh um caractere \n");
    }

    if(islower(teste2)){
        printf("Eh um caractere minusculo, ele maiusculo ficaria %c\n" , toupper(teste2));
    }else{
        printf(" eh um caractere maiusculo \n");
    }

    if(isupper(teste3)){
        printf("Eh um caractere maiusculo , ele minusculo ficaria %c\n" , tolower(teste3));
    }else{
        printf("Nao eh um caractere maiusuculo \n");
    }

    if(ispunct(teste4)){
        printf("Eh um caractere com pontuacao \n");
    }else{
        printf("Nao eh um caractere com pontuacao \n");
    }

    if(isspace(teste5)){
        printf("Eh um espaco \n");
    }else{
        printf("Nao eh um espaco \n");
    }
    return 0;
}

