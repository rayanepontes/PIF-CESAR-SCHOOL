#include <stdio.h>

int main() {
    float horas_normais, horas_extras;
    float salario_bruto, imposto, salario_liquido;

    printf("digite o total de horas normais trabalhadas: ");
    scanf("%f", &horas_normais);

    printf("digite o total de horas extras trabalhadas: ");
    scanf("%f", &horas_extras);

    salario_bruto = horas_normais * 10.0 + horas_extras * 15.0;

    imposto = salario_bruto > 12000.0
              ? (salario_bruto - 12000.0) * 0.10
              : 0.0;

    salario_liquido = salario_bruto - imposto;

    printf("salario anual bruto: r$ %.2f\n", salario_bruto);
    printf("imposto: r$ %.2f\n", imposto);
    printf("salario liquido: r$ %.2f\n", salario_liquido);

    return 0;
}