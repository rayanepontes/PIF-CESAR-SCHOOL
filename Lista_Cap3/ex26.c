#include <stdio.h>

int main() {
    int a, b;
    int soma = 0;

    printf("digite o valor de a: ");
    scanf("%d", &a);

    printf("digite o valor de b: ");
    scanf("%d", &b);

    if (a >= b || a <= 0 || b <= 0) {
        printf("valores invalidos.\n");
        return 0;
    }

    printf("primos no intervalo: ");

    for (int n = a; n <= b; n++) {
        int divisores = 0;

        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            printf("%d ", n);
            soma += n;
        }
    }

    printf("\nsoma dos primos: %d\n", soma);

    return 0;
}