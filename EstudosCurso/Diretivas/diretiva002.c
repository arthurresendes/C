#include <stdio.h>

#ifndef PI
#define PI 3.14567
#endif

int main()
{
    printf("\n Alterando constante %f", 2 * PI);

#ifdef PI //Se PI for definido execute isso
    printf("%f", PI);
#endif
    return 0;
}

//ifdef executa caso exista
//ifndef cria caso não exista uma definição
