#include <stdio.h>

void contagem(int n);
void contagemCrescente(int n);

int main() {
    int n;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Numero invalido.\n");
        return 1;
    }

    printf("\nContagem regressiva:\n");
    contagem(n);

    printf("\nContagem crescente:\n");
    contagemCrescente(n);

    return 0;
}

void contagem(int n) {

    if (n == 0) {
        printf("Fogo!\n");
        return;
    }

    printf("%d\n", n);
    contagem(n - 1);
}
void contagemCrescente(int n) {

    if (n == 0) {
        return;
    }
    contagemCrescente(n - 1);
    printf("%d\n", n);
}