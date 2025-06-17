#include <stdio.h>

// Função que calcula o valor com desconto
float calcularDesconto(float precoLitro, int quantidadeLitros, float descontoAte20, float descontoAcima20) {
    float total = precoLitro * quantidadeLitros;
    float desconto;

    if (quantidadeLitros <= 20) {
        desconto = total * descontoAte20;
    } else {
        desconto = total * descontoAcima20;
    }

    return total - desconto;
}

// Função que mostra os resultados
void mostrarResultado(float precoLitro, int quantidadeLitros, float descontoAte20, float descontoAcima20) {
    float totalSemDesconto = precoLitro * quantidadeLitros;
    float totalComDesconto = calcularDesconto(precoLitro, quantidadeLitros, descontoAte20, descontoAcima20);

    printf("Preço a se pagar antes do desconto: R$ %.2f\n", totalSemDesconto);
    printf("Preço com desconto: R$ %.2f\n", totalComDesconto);
}

int main() {
    int escolha, quantidadeLitros;

    printf("Quer abastecer com Álcool ou Gasolina (1-Álcool | 2-Gasolina): ");
    scanf("%d", &escolha);

    printf("Quantos litros quer colocar: ");
    scanf("%d", &quantidadeLitros);

    if (escolha == 1) {
        // Álcool: preço = 1.90, desconto 3% até 20L, 5% acima
        mostrarResultado(1.90, quantidadeLitros, 0.03, 0.05);
    } else if (escolha == 2) {
        // Gasolina: preço = 2.50, desconto 4% até 20L, 6% acima
        mostrarResultado(2.50, quantidadeLitros, 0.04, 0.06);
    } else {
        printf("Opção inválida!\n");
    }

    return 0;
}
