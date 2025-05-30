
#include <stdio.h>

int main()
{
    FILE *arq;
    char nomeArquivo[12];
    char caractere = 0;
    int contaCaractere = 0;
    
    printf("Informe o nome do arquivo a ser aberto: ");
    fgets(nomeArquivo , 12 , stdin);
    
    printf("Informe o caractere a ser pesquisado: ");
    scanf("%c" , &caractere);
    
    arq = fopen(nomeArquivo, "r");
    
    if(arq){
        for(char c = getc(arq); c != EOF; c = getc(arq)){
            if(c ==  caractere){
                contaCaractere++;
            }
        }
        printf("Existe(m) %d caractere(s) %c "  , contaCaractere  , caractere);
    }else{
        printf("Não foi possivel criar o arquivo. ");
    }
    
    
    fclose(arq);
    arq = NULL;
    return 0;
}