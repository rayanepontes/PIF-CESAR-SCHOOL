#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, p, area;

    printf("digite o lado a: ");
    scanf("%f", &a);

    printf("digite o lado b: ");
    scanf("%f", &b);

    printf("digite o lado c: ");
    scanf("%f", &c);

    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("area do triangulo: %.2f\n", area);

    return 0;
}