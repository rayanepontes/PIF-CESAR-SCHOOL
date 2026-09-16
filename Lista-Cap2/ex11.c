#include <stdio.h>

int main() {
    float graus, radianos;
    const float pi = 3.141593;

    printf("digite o angulo em graus: ");
    scanf("%f", &graus);

    radianos = graus * (pi / 180.0);

    printf("angulo em radianos: %.6f\n", radianos);

    return 0;
}