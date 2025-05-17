#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

void lerTexto(char *buffer, int max) {
    char c;
    int i;

    do {
        i = 0;
        do {
            c = getch();
            if (isalpha(c) || c == ' ') {
                if (i < max - 1) {
                    buffer[i++] = c;
                    printf("%c", c);
                }
            } else if (c == 8 && i > 0) {
                i--;
                printf("\b \b");
            }
        } while (c != 13);
        buffer[i] = '\0';
    } while (strlen(buffer) == 0);
}

void lerSomenteNumeros(char *buffer, int max) {
    char c;
    int i;

    do {
        i = 0;
        do {
            c = getch();
            if (isdigit(c)) {
                if (i < max - 1) {
                    buffer[i++] = c;
                    printf("%c", c);
                }
            } else if (c == 8 && i > 0) {
                i--;
                printf("\b \b");
            }
        } while (c != 13);
        buffer[i] = '\0';
    } while (strlen(buffer) == 0);
}

double lerDouble() {
    char buffer[50];
    int i = 0;
    char c;

    do {
        i = 0;
        do {
            c = getch();
            if ((isdigit(c) || c == '.') && i < 49) {
                buffer[i++] = c;
                printf("%c", c);
            } else if (c == 8 && i > 0) {
                i--;
                printf("\b \b");
            }
        } while (c != 13);
        buffer[i] = '\0';
    } while (strlen(buffer) == 0);

    return atof(buffer);
}

int lerInt() {
    char buffer[20];
    int i = 0;
    char c;

    do {
        i = 0;
        do {
            c = getch();
            if (isdigit(c) && i < 19) {
                buffer[i++] = c;
                printf("%c", c);
            } else if (c == 8 && i > 0) {
                i--;
                printf("\b \b");
            }
        } while (c != 13);
        buffer[i] = '\0';
    } while (strlen(buffer) == 0);

    return atoi(buffer);
}

void pularLinha() {
    printf("\n");
}
void limparTela() {
    system("cls");
}