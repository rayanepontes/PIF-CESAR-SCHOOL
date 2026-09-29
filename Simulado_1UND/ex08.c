#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
    double raio, area, volume;

    printf("digite o valor do raio (R) da esfera: ");
    scanf("%lf", &raio);

    area = 4.0 * PI * pow(raio, 2);
    volume = (4.0 / 3.0) * PI * pow(raio, 3);

    printf("\n--- Resultados ---\n");
    printf("area da superfície: %.3lf\n", area);
    printf("volume da esfera:    %.3lf\n", volume);

    return 0;
}