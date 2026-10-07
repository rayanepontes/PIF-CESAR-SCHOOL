#include <stdio.h>

int main() {
    int n;
    int anterior = 1;
    int atual = 1;
    int proximo;

    printf("digite o numero do termo desejado: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("numero de termo invalido.\n");
        return 0;
    }

    printf("sequencia: ");

    for (int i = 1; i <= n; i++) {
        if (i == 1 || i == 2) {
            printf("1 ");
        } else {
            proximo = anterior + atual;
            printf("%d ", proximo);
            anterior = atual;
            atual = proximo;
        }
    }

    printf("\ntermo %d: %d\n", n, atual);

    return 0;
}