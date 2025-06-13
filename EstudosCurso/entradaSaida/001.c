#include <stdio.h>

int main(){
    //FILE = Arquivo
    FILE *arq;

    //Fopen = Abre um arquivo
    //w- Abre o arquivo pra escrita
    //a- Abre o arquivo pra escrita, se não existir ele cria
    //r- Abre o arquivo pra leitura
    //wa- abri o arquivo para a adição de conteudo
    arq = fopen("arquivo.txt" , "a");

    //Sempre devemos fechar-los
    fclose(arq);
    return 0;
}

