#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4;
    float media_simples, media_ponderada;

    printf("digite a nota 1: ");
    scanf("%f", &nota1);

    printf("digite a nota 2: ");
    scanf("%f", &nota2);

    printf("digite a nota 3: ");
    scanf("%f", &nota3);

    printf("digite a nota 4: ");
    scanf("%f", &nota4);

    media_simples = (nota1 + nota2 + nota3 + nota4) / 4.0;

    media_ponderada = (nota1 + nota2 + 2 * nota3 + 2 * nota4) / 6.0;

    printf("media simples: %.2f\n", media_simples);
    printf("media ponderada: %.2f\n", media_ponderada);

    return 0;
}