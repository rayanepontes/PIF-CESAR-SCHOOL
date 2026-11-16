#include <stdio.h>

float celsius(float fahr);

int main() {
    float fahrenheit, resultado;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    resultado = celsius(fahrenheit);

    printf("Celsius = %.2f\n", resultado);

    return 0;
}

float celsius(float fahr) {
    return (fahr - 32.0) * 5.0 / 9.0;
}
