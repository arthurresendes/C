#include <stdio.h>

int main(){
    int f = 40;
    float c;

    while(f<=100){
        c = 5.0/9.0 * (f-32);
        printf("Fahrenheit: %d\tCelsius: %.2f\n" , f , c);
        f = f +1;
    }
    return 0;
}