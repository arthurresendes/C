#include <stdio.h>

#include <windows.h> // necessário para Sleep()

int main()
{

    printf("=== Seção 1: Introdução ===\n");

    printf("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.\n\n");

    Sleep(2000); // 2000 milissegundos = 2 segundos

    printf("=== Seção 2: Desenvolvimento ===\n");

    printf("Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.\n\n");

    Sleep(2000);

    printf("=== Seção 3: Conclusão ===\n");

    printf("Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.\n");

    Sleep(2000);

    return 0;
}