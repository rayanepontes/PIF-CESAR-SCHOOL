#include <stdio.h>

int main() {
    float salario_base, gratificacao, imposto, salario_liquido;

    printf("digite o salario base: ");
    scanf("%f", &salario_base);

    gratificacao = salario_base * 0.05;
    imposto = salario_base * 0.07;
    salario_liquido = salario_base + gratificacao - imposto;

    printf("salario liquido: r$ %.2f\n", salario_liquido);

    return 0;
}