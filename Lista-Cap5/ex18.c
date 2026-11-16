#include <stdio.h>

long potencia(int base, int expoente);

int main() {
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    if (expoente < 0) {
        printf("Erro: o expoente deve ser nao negativo.\n");
    } else {
        printf("Resultado = %ld\n", potencia(base, expoente));
    }

    return 0;
}

long potencia(int base, int expoente) {
    // Caso base: qualquer numero elevado a zero resulta em 1.
    if (expoente == 0) {
        return 1;
    }

    return base * potencia(base, expoente - 1);
}