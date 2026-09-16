#include <stdio.h>

int main() {
    int numero;

    printf("digite um numero inteiro: ");
    scanf("%d", &numero);

    numero++;
    printf("sucessor: %d\n", numero);

    numero--;
    numero--;
    printf("antecessor: %d\n", numero);

    return 0;
}