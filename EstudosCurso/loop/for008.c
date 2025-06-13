#include <stdio.h>

int main(){
    int i , n1 ,n2 , ax;
    printf("Digite um numero: \n");
    scanf("%d" , &n1);
    printf("Digite outro numero: \n");
    scanf("%d" , &n2);
    //Mostra os valor mesmo se for ao contrario , ex n1= 7 e n2 = 3 , n1 vira 3 e n2 vira 7
    if(n1>n2){
        ax =n1;
        n1=n2;
        n2=ax;
    }
    for(i=n1;i<=n2;i+=1){
        printf("%d\n" , i);
    }
    
    return 0;
}