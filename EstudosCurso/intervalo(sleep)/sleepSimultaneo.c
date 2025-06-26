#include <stdio.h>

#ifdef _WIN32

#include <windows.h>

#define esperar(segundos) Sleep((segundos) * 1000)

#else

#include <unistd.h>

#define esperar(segundos) sleep(segundos)

#endif

int main()
{

    printf("=== Seção 1: Introdução ===\n");

    printf("Lorem ipsum dolor sit amet...\n\n");

    esperar(2);

    printf("=== Seção 2: Desenvolvimento ===\n");

    printf("Ut enim ad minim veniam...\n\n");

    esperar(2);

    printf("=== Seção 3: Conclusão ===\n");

    printf("Duis aute irure dolor...\n");

    esperar(2);

    return 0;
}