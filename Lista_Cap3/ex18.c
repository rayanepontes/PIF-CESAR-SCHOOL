#include <stdio.h>

int main() {
    int num;
    int invertido = 0;

    printf("digite um numero inteiro positivo: ");
    scanf("%d", &num);

    while (num > 0) {
        int digito = num % 10;
        invertido = invertido * 10 + digito;
        num /= 10;
    }

    printf("numero invertido: %d\n", invertido);

    return 0;
}