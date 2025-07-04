#include <stdio.h>

void principal();

int main()
{
    principal();
    return 0;
}

void principal()
{
    for(int i = 1 ; i <= 100 ; i++){
        printf("%d\n", i);
    }
}
