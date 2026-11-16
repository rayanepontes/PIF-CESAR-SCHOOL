#include <stdio.h>

int maior(int a, int b);

int main() {
    int n1, n2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);

    printf("Maior numero = %d\n", maior(n1, n2));

    return 0;
}

int maior(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}