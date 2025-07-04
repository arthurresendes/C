#include <stdio.h>

void principal();

int main()
{
    principal();
    return 0;
}

void principal()
{
    int i = 0;

    while(i < 10){
        i++;
        printf("%d\n", i);
    }

}
