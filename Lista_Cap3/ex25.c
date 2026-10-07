#include <stdio.h>

int main() {
    int n;
    int divisores = 0;

    printf("digite um numero inteiro positivo: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }

    if (n > 1 && divisores == 2) {
        printf("%d e primo.\n", n);
    } else {
        printf("%d nao e primo.\n", n);
    }

    printf("quantidade de divisores: %d\n", divisores);

    return 0;
}