#include <stdio.h>

int main()
{
    int a = 10, *ponteiro;
    printf("%d \n", a);
    ponteiro = &a;

    *ponteiro = 30;
    printf("%d", a);

    return 0;
}