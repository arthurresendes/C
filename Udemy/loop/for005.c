
#include <stdio.h>

int main()
{
    int num , i;
    printf("Digite apenas um numero: ");
    scanf("%d", &num);
    for (i = 0 ; i < num ; i++){
        if(i % 2 == 0){
            printf("%d \n", i);
        }
    }

    return 0;
}
