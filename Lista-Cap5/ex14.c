#include <stdio.h>

int somaDigitos(int n);

int main() {
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    printf("Soma dos digitos = %d\n", somaDigitos(numero));

    return 0;
}

int somaDigitos(int n) {
    if (n < 10) {
        return n;
    }
    return (n % 10) + somaDigitos(n / 10);
}