#include <stdio.h>

int main()
{
    int a = 10;

    int *ponteiro;
    ponteiro = &a;
printf("%d \n" , *ponteiro);
    *ponteiro = 20;
    printf("%d" , a);

    return 0;
}