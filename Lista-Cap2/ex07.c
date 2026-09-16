#include <stdio.h>

int main() {
    int dia, mes, ano;

    printf("digite uma data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("data invertida: %04d/%02d/%02d\n", ano, mes, dia);

    return 0;
}