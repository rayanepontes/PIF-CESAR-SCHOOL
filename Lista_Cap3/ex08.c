#include <stdio.h>

int main() {
    float nota;

    do {
        printf("digite uma nota de 0.0 a 10.0: ");
        scanf("%f", &nota);

        if (nota < 0.0 || nota > 10.0) {
            printf("nota invalida! tente novamente.\n");
        }
    } while (nota < 0.0 || nota > 10.0);

    printf("nota registrada com sucesso!\n");

    return 0;
}

