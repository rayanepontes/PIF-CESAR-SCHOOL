#include <stdio.h>

int main() {
    int valor1, valor2, valor3;
    double media;

    printf("Digite tres valores inteiros: ");
    scanf("%d %d %d", &valor1, &valor2, &valor3);

    media = (valor1 + valor2 + valor3) / 3.0;

    printf("Media: %.2f\n", media);

    return 0;
}