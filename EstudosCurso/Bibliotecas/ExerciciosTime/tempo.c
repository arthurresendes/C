#include <stdio.h>
#include <time.h>

int main() {
    time_t segundos;

    segundos = time(NULL);
    printf("Horas des de janeiro de 1970: %ld\n" , segundos/3600);
    printf("Minutos des de janeiro de 1970: %ld\n" , segundos/60);
    printf("Segundos des de janeiro de 1970: %ld\n" , segundos);

    return 0;
}
