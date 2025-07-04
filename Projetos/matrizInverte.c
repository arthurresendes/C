#include <stdlib.h>

#include <stdio.h>

 

#define LINHA 4

#define COLUNA 4

 

void inserir(int matriz[LINHA][COLUNA]);

void exibirNormal(int matriz[LINHA][COLUNA]);

void menu(int matriz[LINHA][COLUNA]);

void contrario(int matriz[LINHA][COLUNA]);

 

int main()

{

    int matriz[LINHA][COLUNA];

    inserir(matriz);

    menu(matriz);

   

 

    return 0;

}

 

void inserir(int matriz[LINHA][COLUNA]){

    for(int i = 0 ; i < LINHA ; i++){

        for(int j = 0; j < COLUNA; j++){

            printf("Preencha o valor da matriz [%d][%d]: " , i+1, j+1);

            scanf("%d" , &matriz[i][j]);

        }

    }

}

 

void menu(int matriz[LINHA][COLUNA]){

    int opcao;

    printf("Quer mostrar a matriz certa ou transposta(1 ou 2): \n");

    scanf("%d" , &opcao);

   

    switch(opcao){

        case 1:

        exibirNormal(matriz);

        break;

       

        case 2:

        contrario(matriz);

        break;

       

        default:

        menu(matriz);

    }

}

 

void exibirNormal(int matriz[LINHA][COLUNA]){

    for(int i = 0; i < LINHA ;i++){

        for(int j = 0 ; j < COLUNA; j++){

            printf("%d " , matriz[i][j]);

        }

        printf("\n");

    }

}

 

void contrario(int matriz[LINHA][COLUNA]){

    for(int i = 0; i < LINHA ;i++){

        for(int j = 0 ; j < COLUNA; j++){

            printf("%d " , matriz[j][i]);

        }

        printf("\n");

    }

}
