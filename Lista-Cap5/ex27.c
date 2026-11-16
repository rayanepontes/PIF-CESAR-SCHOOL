#include <stdio.h>

float celsiusParaFahrenheit(float c);
float celsiusParaKelvin(float c);
float fahrenheitParaCelsius(float f);
float kelvinParaCelsius(float k);

int main() {
    int opcao;
    float temperatura, resultado;

    printf("===== CONVERSOR DE TEMPERATURAS =====\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    switch (opcao) {
        case 1:
            resultado = celsiusParaFahrenheit(temperatura);
            printf("Temperatura = %.2f Fahrenheit\n", resultado);
            break;

        case 2:
            resultado = celsiusParaKelvin(temperatura);
            printf("Temperatura = %.2f Kelvin\n", resultado);
            break;

        case 3:
            resultado = fahrenheitParaCelsius(temperatura);
            printf("Temperatura = %.2f Celsius\n", resultado);
            break;

        case 4:
            resultado = kelvinParaCelsius(temperatura);
            printf("Temperatura = %.2f Celsius\n", resultado);
            break;

        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}

float celsiusParaFahrenheit(float c) {
    return (c * 9.0 / 5.0) + 32.0;
}

float celsiusParaKelvin(float c) {
    return c + 273.15;
}

float fahrenheitParaCelsius(float f) {
    return (f - 32.0) * 5.0 / 9.0;
}

float kelvinParaCelsius(float k) {
    return k - 273.15;
}