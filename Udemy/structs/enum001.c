#include <stdio.h>

enum diasSemana{
segunda,
terca,
quarta,
quinta,
sexta,
sabado,
domingo
};

int main(){
    enum diasSemana d1,d2;

    d1 = quinta;

    d2 = 3;

    if(d1 == d2){
        printf("Os dois sao iguais");
    }else{
        printf("Os dias não sao iguais");
    }
    return 0;
}

