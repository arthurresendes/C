#include <stdio.h>


int main(){

    int n1 = 20;

    printf("%d \n" , n1);

    int* incrementa = &n1;
    n1 = 30;
    ++(*incrementa);

    printf("%d \n" , n1);

    printf("%d \n" , &n1);
    printf("%d \n" , &incrementa);


    return 0;
}
