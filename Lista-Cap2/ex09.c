#include <stdio.h>

int main() {
    int num1, num2;
    float divisao;

    printf("digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    printf("soma: %d\n", num1 + num2);
    printf("subtracao: %d\n", num1 - num2);
    printf("multiplicacao: %d\n", num1 * num2);

    if (num2 != 0) {
        divisao = (float)num1 / num2;
        printf("divisao: %.2f\n", divisao);
    } else {
        printf("nao e possivel dividir por zero.\n");
    }

    return 0;
}