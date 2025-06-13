#include <stdio.h>

int main(){
    int i;
    int quanto;
    int skibi;
    printf("Digite ate quando vai seu loop:");
    scanf("%d" , &skibi);
    printf("Digite ate o valor que comeca: ");
    scanf("%d" , &i);
    printf("Digite de quanto em quanto esse numero vai: ");
    scanf("%d" , &quanto);
    while(i <= skibi){
        printf("%d \n" , i);
        i = i + quanto;
    }
    return 0;
}