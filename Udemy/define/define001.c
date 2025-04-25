#include <stdio.h>
#include <stdlib.h>
#define TAM 10 // Definindo uma constante com o valor 10. Constantes são definidas com #define e não podem ser alteradas durante a execução do programa, sendo uteis para definir valores fixos que não devem ser alterados.

int main(){
    printf("%d \n" , TAM);

    for(int i = 1 ; i <= TAM ; i++){
        printf("%d \n", i);
    }
    return 0;
}