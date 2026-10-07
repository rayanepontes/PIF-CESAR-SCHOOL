#include <stdio.h>

int main() {
    int n;
    long long int fatorial = 1;

    printf("digite um número inteiro não-negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("erro: não é possível calcular o fatorial de um número negativo.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            fatorial *= i;
        }
        printf("o fatorial de %d (%d!) é: %lld\n", n, n, fatorial);
    }

    return 0;
}