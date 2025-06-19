
#include <stdio.h>

void borda(){
    printf("=======================\n");
}

void bordaResult(){
    printf("=======Resultado=======\n");
}

int main()
{
    int n1 ;
    
    do{
    printf("Digite o numero para ver se eh par ou impar (-1 para parar): ");
    scanf("%d" , &n1);
    if(n1 %2 == 0){
        bordaResult();
        printf("Numero par \n");
        borda();
    }else{
        bordaResult();
        printf("Numero impar \n");
        borda();
    }
    }while(n1 != -1);

    return 0;
}
