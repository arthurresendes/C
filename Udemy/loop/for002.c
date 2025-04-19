#include <stdio.h>

int main()
{
    int i;
    int tabuada;
    printf("Digite uma tabuada: ");
    scanf("%d" , &tabuada); 
    for(i =1 ; i <= 10 ; i++){
        printf("%d x %d = %d \n" , tabuada , i , tabuada *i);
    }

    return 0;
}
