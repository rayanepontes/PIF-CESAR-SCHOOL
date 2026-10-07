#include <stdio.h>

int main() {
    int n;
    int numero = 1;

    printf("digite um numero inteiro positivo: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", numero);
            numero++;
        }

        printf("\n");
    }

    return 0;
}