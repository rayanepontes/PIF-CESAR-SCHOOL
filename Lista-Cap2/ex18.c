#include <stdio.h>

int main() {
    float raio, area, volume;
    const float pi = 3.141593;

    printf("digite o raio da esfera: ");
    scanf("%f", &raio);

    area = 4 * pi * raio * raio;
    volume = (4.0 / 3.0) * pi * raio * raio * raio;

    printf("area da superficie: %.2f\n", area);
    printf("volume: %.2f\n", volume);

    return 0;
}