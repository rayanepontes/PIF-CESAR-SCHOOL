#include <stdio.h>

int main() {
    int dias;
    float bruto, imposto, liquido;

    printf("digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    bruto = dias * 30.0;
    imposto = bruto * 0.08;
    liquido = bruto - imposto;

    printf("valor bruto: r$ %.2f\n", bruto);
    printf("valor liquido: r$ %.2f\n", liquido);

    return 0;
}
