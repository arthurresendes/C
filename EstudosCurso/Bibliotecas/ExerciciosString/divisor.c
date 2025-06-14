#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "pedro@gmail.com";

    printf("Usuario %s" , strtok(str1 , "@" ));


    return 0;
}
