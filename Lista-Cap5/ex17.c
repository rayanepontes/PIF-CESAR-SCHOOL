#include <stdio.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main() {
    int numero;
    long iterativo, recursivo;

    printf("Digite um numero nao negativo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Numero invalido.\n");
        return 1;
    }

    iterativo = fatorialIterativo(numero);
    recursivo = fatorialRecursivo(numero);

    printf("Fatorial iterativo = %ld\n", iterativo);
    printf("Fatorial recursivo = %ld\n", recursivo);

    if (iterativo == recursivo) {
        printf("Os resultados coincidem.\n");
    } else {
        printf("Os resultados sao diferentes.\n");
    }

    return 0;
}

long fatorialIterativo(int n) {
    long resultado = 1;

    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

long fatorialRecursivo(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fatorialRecursivo(n - 1);
}
