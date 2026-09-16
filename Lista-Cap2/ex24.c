#include <stdio.h>

int main() {
    float kmh, ms;

    printf("digite a velocidade em km/h: ");
    scanf("%f", &kmh);

    ms = kmh / 3.6;

    printf("velocidade em m/s: %.2f\n", ms);

    return 0;
}