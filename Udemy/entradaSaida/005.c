
#include <stdio.h>

int main()
{
    FILE *arq;
    char nomeArquivo[12];
    int contaLinhas = 0;
    
    printf("Informe o nome do arquivo a ser aberto: ");
    fgets(nomeArquivo , 12 , stdin);
    
    arq = fopen(nomeArquivo , "r");
    
    if(arq){
        for(char c = getc(arq); c != EOF; c = getc(arq)){
            if(c ==  '\n'){
                contaLinhas++;
            }
        }
        printf("O arquivo %s possui: %d linhas" , nomeArquivo  , contaLinhas);
    }else{
        printf("Não foi possivel criar o arquivo. ");
    }
    
    fclose(arq);
    arq = NULL;
    return 0;
}