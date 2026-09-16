#include <stdio.h>

int main() {
    float celsius, fahrenheit, kelvin;

    printf("digite a temperatura em celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    kelvin = celsius + 273.15;

    printf("fahrenheit: %.2f\n", fahrenheit);
    printf("kelvin: %.2f\n", kelvin);

    return 0;
}