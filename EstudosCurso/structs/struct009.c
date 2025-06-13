#include <string.h>

#include <stdio.h>

struct cardapio
{

    char segunda[20];

    char terca[20];

    char quarta[20];

    char quinta[20];

    char sexta[20];

    char sabado[20];

    char domingo[20];
};

int main()

{

    struct cardapio cdp;

    strcpy(cdp.segunda, "Feijoada");

    strcpy(cdp.terca, "Lasanha");

    strcpy(cdp.quarta, "Estrogonofe");

    strcpy(cdp.quinta, "Arroz caipira");

    strcpy(cdp.sexta, "Baiao de dois");

    strcpy(cdp.sabado, "Feijoada");

    strcpy(cdp.domingo, "Churrasco");

    printf("Segunda: %s\n", cdp.segunda);

    printf("Terca: %s\n", cdp.terca);

    printf("Quarta: %s\n", cdp.quarta);

    printf("Quinta: %s\n", cdp.quinta);

    printf("Sexta: %s\n", cdp.sexta);

    printf("Sabado: %s\n", cdp.sabado);

    printf("Domingo: %s\n", cdp.domingo);

    return 0;
}