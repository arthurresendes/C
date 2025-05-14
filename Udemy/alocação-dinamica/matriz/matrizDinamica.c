#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas = 3 , colunas = 3 , i , j;
    int **matriz;


    matriz =(int **) malloc(linhas * sizeof(int *));


    for( i = 0 ;i < linhas ; i++){
        matriz[i] = (int *) malloc(colunas * sizeof(int));
    }

    for ( i = 0; i < linhas; i++)
    {
        for ( j = 0; j < colunas; j++)
        {
           matriz[i][j] = i;
           printf("%d" , matriz[i][j]);
        }
        printf("\n");
    }
    
    free (matriz[i]);
    return 0;
}