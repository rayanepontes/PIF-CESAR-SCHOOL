#include <stdio.h>

// Descomente a linha abaixo para ativar o modo DEBUG.
// #define DEBUG

int somaAteN(int n);

int main() {
    int numero, resultado;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Numero invalido.\n");
        return 1;
    }

    resultado = somaAteN(numero);

    printf("Soma final = %d\n", resultado);

    return 0;
}

int somaAteN(int n) {
    int soma = 0;

    for (int i = 1; i <= n; i++) {
        soma += i;

        #ifdef DEBUG
            printf("Soma parcial na iteracao %d = %d\n", i, soma);
        #endif
    }

    return soma;
}