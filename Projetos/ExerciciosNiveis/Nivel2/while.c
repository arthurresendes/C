#include <stdio.h>

void principal();

int main()
{
    principal();
    return 0;
}

void principal()
{
    int i = 11;

    while(i > 0){
        i--;
        printf("%d\n", i);
    }

}
