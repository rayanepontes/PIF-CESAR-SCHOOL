#include <stdio.h>

int main() {
    char caractere;

    printf("digite um caractere: ");
    scanf("%c", &caractere);

    printf("caractere: %c\n", caractere);
    printf("codigo ascii: %d\n", caractere);

    // o numero representa o codigo ascii associado ao caractere.

    return 0;
}