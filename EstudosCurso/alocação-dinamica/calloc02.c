#include <stdio.h>
#include <stdlib.h>

int main(){
    int linha , coluna;
    int *alocacao;
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d" , &linha);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d" , &coluna);
    alocacao = (int *)calloc(linha * coluna , sizeof(int));
    if (alocacao == NULL)
        {
            printf("Erro ao alocar memoria.\n");
            return 1; // Retorna um código de erro se a alocação falhar
        }

        for(int i = 0; i < linha ; i++){
            for(int j = 0; j < coluna ; j++){
                printf("Digite o valor da matriz[%d][%d]: " , i +1 , j +1);
                scanf("%d" , &alocacao[i * coluna + j]);
            }
        }

        for(int i = 0; i<linha ; i++){
            for(int j = 0; j < coluna ; j++){
                printf("%d " , alocacao[i * coluna + j]);
            }
            printf("\n");
        }

    free(alocacao);
    return 0;
}

