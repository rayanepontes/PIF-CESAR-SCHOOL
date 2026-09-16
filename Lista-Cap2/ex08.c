#include <stdio.h>

int main() {
    int numero;
    int quadrado;
    float decima;

    printf("digite um numero inteiro: ");
    scanf("%d", &numero);

    quadrado = numero * numero;
    decima = numero / 10.0;

    printf("quadrado: %d\n", quadrado);
    printf("decima parte: %.2f\n", decima);

    return 0;
}