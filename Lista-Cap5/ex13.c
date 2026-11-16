#include <stdio.h>

float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main() {
    float n1, n2, resultado;
    int opcao;

    printf("===== CALCULADORA =====\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");

    printf("Escolha uma operacao: ");
    scanf("%d", &opcao);

    printf("Digite dois valores: ");
    scanf("%f %f", &n1, &n2);

    switch (opcao) {
        case 1:
            resultado = soma(n1, n2);
            printf("Resultado = %.2f\n", resultado);
            break;

        case 2:
            resultado = subtrai(n1, n2);
            printf("Resultado = %.2f\n", resultado);
            break;

        case 3:
            resultado = multiplica(n1, n2);
            printf("Resultado = %.2f\n", resultado);
            break;

        case 4:
            if (n2 == 0) {
                printf("Erro: divisao por zero.\n");
            } else {
                resultado = divide(n1, n2);
                printf("Resultado = %.2f\n", resultado);
            }
            break;

        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}

float soma(float a, float b) {
    return a + b;
}

float subtrai(float a, float b) {
    return a - b;
}

float multiplica(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}