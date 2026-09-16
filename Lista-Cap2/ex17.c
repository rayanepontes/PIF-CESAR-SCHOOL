#include <stdio.h>

int main() {
    float raio, area, circunferencia;
    const float pi = 3.141593;

    printf("digite o raio do circulo: ");
    scanf("%f", &raio);

    area = pi * raio * raio;
    circunferencia = 2 * pi * raio;

    printf("area: %.2f\n", area);
    printf("circunferencia: %.2f\n", circunferencia);

    return 0;
}