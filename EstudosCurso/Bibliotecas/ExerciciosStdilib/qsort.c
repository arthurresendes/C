#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    time_t t;

    srand((unsigned) time(&t));
    
    for(int i = 0 ; i< 10 ; i++){
        printf("%d\n" , rand() %101);
    }
    return 0;
}