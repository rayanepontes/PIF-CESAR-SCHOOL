#include <stdio.h>

int main() {
    float nota;

    do {
        printf("digite uma nota válida (entre 0.0 e 10.0): ");
        scanf("%f", &nota);

        if (nota < 0.0 || nota > 10.0) {
            printf("erro: nota %.1f inválida! Tente novamente.\n\n", nota);
        }
    } while (nota < 0.0 || nota > 10.0);

    printf("\nnota %.2f registrada com sucesso!\n", nota);

    return 0;
}