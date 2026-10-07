#include <stdio.h>

int main() {
    int opcao;
    float salario;
    float novo_salario;
    float imposto;

    do {
        printf("\nmenu:\n");
        printf("1 - reajuste salarial\n");
        printf("2 - retencao de imposto de renda\n");
        printf("3 - encerrar programa\n");
        printf("digite uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("digite o salario: ");
                scanf("%f", &salario);

                if (salario <= 2000.0) {
                    novo_salario = salario * 1.15;
                } else {
                    novo_salario = salario * 1.10;
                }

                printf("novo salario: r$ %.2f\n", novo_salario);
                break;

            case 2:
                printf("digite o salario: ");
                scanf("%f", &salario);

                if (salario <= 3000.0) {
                    imposto = salario * 0.08;
                } else {
                    imposto = salario * 0.15;
                }

                printf("valor do imposto: r$ %.2f\n", imposto);
                break;

            case 3:
                printf("programa encerrado.\n");
                break;

            default:
                printf("opcao invalida. tente novamente.\n");
        }

    } while (opcao != 3);

    return 0;
}