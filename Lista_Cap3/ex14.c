#include <stdio.h>

int main() {
    int i;
    int soma = 0;

    for (i = 1; i <= 100; i++) {
        printf("%d -> %d\n", i, i * i);
        soma += i * i;
    }

    printf("soma dos quadrados: %d\n", soma);

    return 0;
}