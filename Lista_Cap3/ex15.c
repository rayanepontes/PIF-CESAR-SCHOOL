#include <stdio.h>

int main() {
    int num;
    int encontrou = 0;

    printf("digite um numero inteiro positivo: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("nenhum numero satisfaz a condicao.");
    }

    return 0;
}