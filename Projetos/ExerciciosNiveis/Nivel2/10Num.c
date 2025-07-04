#include <stdio.h>

void principal();

int main()
{
    principal();
    return 0;
}

void principal()
{
    int n1;
    for(int i = 0 ; i < 10 ; i++){
        printf("Digite o valor %d:" , i + 1);
        scanf("%d" , &n1);
        if(n1 > 0){
        printf("Eh positivo\n");
    }else if(n1 < 0){
        printf("Nao eh positivo\n");
    }else{
        printf("Numero eh igual a zero\n");
    }
    }

}
