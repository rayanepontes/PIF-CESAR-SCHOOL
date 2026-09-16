#include <stdio.h>

int main() {
    float lado, base, altura;
    float area_quadrado, area_retangulo, area_triangulo;

    printf("digite o lado do quadrado: ");
    scanf("%f", &lado);

    printf("digite a base do retangulo: ");
    scanf("%f", &base);

    printf("digite a altura do retangulo: ");
    scanf("%f", &altura);

    area_quadrado = lado * lado;
    area_retangulo = base * altura;
    area_triangulo = (base * altura) / 2.0;

    printf("area do quadrado: %.2f\n", area_quadrado);
    printf("area do retangulo: %.2f\n", area_retangulo);
    printf("area do triangulo: %.2f\n", area_triangulo);

    return 0;
}