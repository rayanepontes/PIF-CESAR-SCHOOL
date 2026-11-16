#include <stdio.h>

int ehPar(int n);

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (ehPar(numero) == 1) {
        printf("O numero e par.\n");
    } else {
        printf("O numero e impar.\n");
    }

    return 0;
}

int ehPar(int n) {
    if (n % 2 == 0) {
        return 1;
    }

    return 0;
}