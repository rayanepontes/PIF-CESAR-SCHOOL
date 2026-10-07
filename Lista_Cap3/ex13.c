#include <stdio.h>

int main() {
    int n, i;
    long long int fatorial = 1;

    printf("digite um numero inteiro: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("erro: o numero nao pode ser negativo.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fatorial *= i;
        }

        printf("fatorial: %lld\n", fatorial);
    }

    return 0;
}