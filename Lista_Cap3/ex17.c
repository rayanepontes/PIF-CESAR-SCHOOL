#include <stdio.h>

int main() {
    float nota;
    float maior = 0.0;
    float menor = 10.0;
    float soma = 0.0;
    int total = 0;

    printf("digite as notas dos alunos (-1 para encerrar):\n");

    while (1) {
        scanf("%f", &nota);

        if (nota == -1.0) {
            break;
        }

        if (nota >= 0.0 && nota <= 10.0) {
            if (nota > maior) {
                maior = nota;
            }

            if (nota < menor) {
                menor = nota;
            }

            soma += nota;
            total++;
        }
    }

    if (total > 0) {
        printf("total de alunos: %d\n", total);
        printf("maior nota: %.2f\n", maior);
        printf("menor nota: %.2f\n", menor);
        printf("media geral: %.2f\n", soma / total);
    } else {
        printf("nenhuma nota foi informada.\n");
    }

    return 0;
}