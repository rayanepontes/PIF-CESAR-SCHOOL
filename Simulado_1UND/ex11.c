#include <stdio.h>

int main() {
    int dias;
    const double diaria = 45.00;
    double salario_bruto, gratificacao, imposto, salario_liquido;

    printf("Digite o número de dias trabalhados: ");
    scanf("%d", &dias);

    salario_bruto = dias * diaria;
    gratificacao = salario_bruto * 0.05;
    imposto = salario_bruto * 0.08;
    salario_liquido = salario_bruto + gratificacao - imposto;

    printf("\n=====================================\n");
    printf("         HOLERITE DETALHADO          \n");
    printf("=====================================\n");
    printf("Dias trabalhados:     %d\n", dias);
    printf("Salário Bruto:        R$ %8.2f\n", salario_bruto);
    printf("(+) Gratificação (5%%): R$ %8.2f\n", gratificacao);
    printf("(-) Imposto (8%%):     R$ %8.2f\n", imposto);
    printf("-------------------------------------\n");
    printf("Salário Líquido:      R$ %8.2f\n", salario_liquido);
    printf("=====================================\n");

    return 0;
}