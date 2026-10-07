#include <stdio.h>

int main() {
    int valor;
    int cedulas[] = {100, 50, 20, 10, 5, 2};

    printf("digite o valor do saque: ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("valor invalido.\n");
        return 0;
    }

    for (int i = 0; i < 6; i++) {
        int quantidade = 0;

        while (valor >= cedulas[i]) {
            valor -= cedulas[i];
            quantidade++;
        }

        if (quantidade > 0) {
            printf("cedulas de r$ %d: %d\n", cedulas[i], quantidade);
        }
    }

    if (valor != 0) {
        printf("nao foi possivel decompor completamente o valor.\n");
    }

    return 0;
}