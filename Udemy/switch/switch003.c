
#include <stdio.h>

int main()
{
    int opcao;
    printf("Qual sinalização do semaforo sera: \n");
    printf("1 - Verde \n");
    printf("2 - Amarelo \n");
    printf("3 - Vermelho \n");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        printf("Pode seguir em frente");
        break;
    case 2:
        printf("Reduza a velocidade");
        break;
    case 3:
        printf("Pare imediatamente");
        break;
    default:
        printf("Escolha uma opção valida");
    }

    return 0;
}