#include <stdio.h>

int main() {
    float valor, soma = 0, media;
    int quantidade = 0;

    while (1) {
        printf("digite um valor: ");
        scanf("%f", &valor);

        if (valor < 0) {
            break;
        }

        soma += valor;
        quantidade++;
    }

    if (quantidade > 0) {
        media = soma / quantidade;
    } else {
        media = 0;
    }

    printf("quantidade: %d\n", quantidade);
    printf("soma: %.2f\n", soma);
    printf("media: %.2f\n", media);

    return 0;
}