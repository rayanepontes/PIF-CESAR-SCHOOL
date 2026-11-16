#include <stdio.h>

float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main() {
    float preco, subtotal, total, pago, troco;
    int quantidade, opcaoPagamento;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    if (preco < 0 || quantidade <= 0) {
        printf("Dados invalidos.\n");
        return 1;
    }

    subtotal = calculaSubtotal(preco, quantidade);

    printf("\n===== FORMA DE PAGAMENTO =====\n");
    printf("1 - A vista (10%% de desconto)\n");
    printf("2 - Outras formas de pagamento\n");

    printf("Escolha a opcao: ");
    scanf("%d", &opcaoPagamento);

    if (opcaoPagamento != 1 && opcaoPagamento != 2) {
        printf("Opcao invalida.\n");
        return 1;
    }

    total = aplicaDesconto(subtotal, opcaoPagamento);

    printf("\nSubtotal = R$ %.2f\n", subtotal);
    printf("Total a pagar = R$ %.2f\n", total);

    printf("Digite o valor pago: R$ ");
    scanf("%f", &pago);

    if (pago < total) {
        printf("Valor insuficiente para pagamento.\n");
    } else {
        troco = calculaTroco(total, pago);

        printf("Troco = R$ %.2f\n", troco);
    }

    return 0;
}

float calculaSubtotal(float preco, int quantidade) {
    return preco * quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento) {
    if (opcaoPagamento == 1) {
        return valor * 0.90;
    }

    return valor;
}

float calculaTroco(float total, float pago) {
    return pago - total;
}