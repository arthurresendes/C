#include <stdio.h>
//Uso de FILE , fclose , printf , fgets , scanf, ffush(limpa buffer, corrige bug no windows), fscanf , gets , fputs , getchar ,puts

int main(){
    int n1 ;
    char nome[100];
    printf("Digite seu nome: ");
    fgets(nome , sizeof(nome) ,stdin);
    getchar();
    printf("Digite a sua idade: ");
    fflush(stdout); //Limpa o buffer
    scanf("%d" , &n1); 

    puts(nome);
    printf("idade:%d anos" , n1);
    return 0;
}

