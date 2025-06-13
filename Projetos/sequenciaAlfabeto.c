#include <stdio.h>

#include <ctype.h>

#include <string.h>

int main()

{

    char letra[27];

    int num;

    do
    {

        printf("Digite o numero para converter a letra: ");

        scanf("%d", &num);

    } while (num < 1 || num > 26);

    for (int i = 0; i < num; i++)
    {

        printf("%c ", 65 + i); // 65 = A , ou da para usar ‘A’
    }

    return 0;
}