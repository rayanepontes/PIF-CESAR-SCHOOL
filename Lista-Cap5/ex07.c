#include <stdio.h>

int soma(int a, int b);

int main() {
    int n1, n2, resultado;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);

    resultado = soma(n1, n2);

    printf("Soma = %d\n", resultado);

    return 0;
}

int soma(int a, int b) {
    return a + b;
}