#include <stdio.h>

#include <math.h>

int main(){

    int n1 = 10;
    char n2[4] = "Oi";
    float n3 = 30.0;
    printf("%d\n" , n1);
    printf("%s\n" , n2);
    printf("%f\n" , n3);

    int* p1;
    char* p2;
    float* p3;

    p1 = &n1;
    p2 = n2; // já é o endereço do primeiro caractere
    p3 = &n3;

    *p1 = 20;
    p2 = "Ola";  // aponta para outra string constante
    *p3 = 40.0;

    printf("%d\n" , *p1);
    printf("%s\n" , p2);
    printf("%f\n" , *p3);



    return 0;
}
