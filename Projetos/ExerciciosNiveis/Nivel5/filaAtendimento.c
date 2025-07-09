#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void fila();

int main() {
	fila();
	return 0;
}

void fila() {
	int  tam ;
    char *nome[100];
    printf("Digite a quantidade de nomes a adicionar na fila: ");
    scanf("%d" , &tam);
    getchar();
    for(int i = 0; i < tam ; i++){
        nome[i] = (char *)malloc(100 * sizeof(char));
        if(nome[i] == NULL){
            printf("Erro ao alocar memória!\n");
            exit(1);
        }
        printf("Digite o nome %d: " , i + 1);
        fgets(nome[i] , 100 , stdin);
        nome[i][strcspn(nome[i], "\n")] = '\0';
    }

    printf("\n-------Fila de atendimento-------\n");
    for(int i = 0; i < tam ; i++){
        printf("%d - %s\n" , i+1 , nome[i]);
        free(nome[i]);
    }

}

