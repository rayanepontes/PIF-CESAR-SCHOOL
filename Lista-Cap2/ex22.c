#include <stdio.h>

int main() {
    char letra;

    printf("digite uma letra maiuscula: ");
    scanf("%c", &letra);

    letra = letra + 32;

    printf("letra minuscula: %c\n", letra);

    return 0;
}