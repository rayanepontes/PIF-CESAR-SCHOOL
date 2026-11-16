#include <stdio.h>

long fibonacci(int n);

int main() {
    int quantidade;

    printf("Quantos termos deseja exibir? ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("Quantidade invalida.\n");
        return 1;
    }

    printf("Sequencia de Fibonacci:\n");

    for (int i = 0; i < quantidade; i++) {
        printf("%ld ", fibonacci(i));
    }

    printf("\n");

    return 0;
}

long fibonacci(int n) {
    // Casos base.
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    // Passo recursivo.
    return fibonacci(n - 1) + fibonacci(n - 2);
}