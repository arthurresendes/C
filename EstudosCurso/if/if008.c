#include <stdio.h>


int main() {
    int escolha , quantidadeLitros;
    float multi , parte;
    printf("Quer abastecer com alcool ou gasolina(1-Alcool | 2- Gasolina): ");
    scanf("%d" ,&escolha);
    if(escolha == 1){
        float a = 1.90;
        printf("Quantos litros quer colocar: ");
        scanf("%d" ,&quantidadeLitros);
        multi = a * quantidadeLitros;
        printf("Preço a se pagar antes do desconto %.2f\n" , multi);
        if(quantidadeLitros <= 20){
            parte = multi * 0.03;
            printf("Preço com desconto %.2f" , multi - parte);
        }else{
            parte = multi * 0.05;
            printf("Preço com desconto %.2f" , multi - parte);
        }
    }else{
        float g = 2.50;
        printf("Quantos litros quer colocar: ");
        scanf("%d" ,&quantidadeLitros);
        multi = g * quantidadeLitros;
        printf("Preço a se pagar antes do desconto %.2f\n" , multi);
        if(quantidadeLitros <= 20){
            parte = multi * 0.04;
            printf("Preço com desconto %.2f" , multi - parte);
        }else{
            parte = multi * 0.06;
            printf("Preço com desconto %.2f" , multi - parte);
        }
    }
    return 0;
}