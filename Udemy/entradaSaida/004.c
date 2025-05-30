

#include <stdio.h>

int main()
{
    FILE *arq1 , *arq2; //Criação de dois FILE(arquivos) que recebem um ponteiro
    char caractere = 'A';
    
    arq1 = fopen("arq.txt" , "wa"); //Abre o arquivo1 para writen
    if(arq1){ //Se abrir o arquivo 1
        while(caractere != '0'){ //Se o caractere for diferente de 0 ele volta ate o usuario digitar
            printf("Informe um caractere ou 0 para sair: ");
            scanf(" %c" , &caractere); //Espaço ignora o enter
            
            if(caractere != '0'){
                fputc(caractere , arq1);
            }
        }
    }else{
        printf("Não foi possivel criar o arquivo. ");
    }
    
    fclose(arq1); //Fechamento de arquivo 
    arq1 = NULL;
    
    arq2 = fopen("arq.txt" , "r");
    if(arq2){
        while(caractere = getc(arq2) != EOF){ //End of file
            printf("%c\n" , caractere);
        }
    }else{
        printf("Não foi possivel abrir o arquivo. ");
    }
    
    fclose(arq2);
    arq2 = NULL;

    return 0;
}