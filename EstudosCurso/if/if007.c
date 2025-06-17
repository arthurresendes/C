#include <stdio.h>

int main()
{
    int questaon1,questaon2,questaon3,questaon4,questaon5;
    int contador = 0;
    printf("Vamos nos ajudar a desenvolver o caso do crime \n");
    printf("Telefonou para a vítima?(1-Sim | 2-Não) ");
    scanf("%d" ,&questaon1);
    if(questaon1 == 1){
        contador++;
    }
    printf("Esteve no local do crime?(1-Sim | 2-Não) ");
    scanf("%d" ,&questaon2);
        if(questaon2 == 1){
        contador++;
    }
    printf("Mora perto da vítima?(1-Sim | 2-Não) ");
    scanf("%d" ,&questaon3);
        if(questaon3 == 1){
        contador++;
    }
    printf("Devia para a vítima?(1-Sim | 2-Não) ");
    scanf("%d" ,&questaon4);
        if(questaon4 == 1){
        contador++;
    }
    printf("Já trabalhou com a vítima?(1-Sim | 2-Não) ");
    scanf("%d" ,&questaon5);
        if(questaon5 == 1){
        contador++;
    }

    if(contador == 5){
        printf("Voce eh o assasino");
    }else if(contador == 3 || contador == 4){
        printf("Voce eh cumplice");
    }else if(contador ==2){
        printf("Voce eh suspeita");
    }else{
        printf("Obrigado");
    }
    return 0;
}