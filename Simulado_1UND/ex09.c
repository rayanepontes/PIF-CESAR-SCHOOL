#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, p, area;

    printf("digite os comprimentos dos tres lados do triangulo (a b c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

 
    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("semiperímetro (p): %.2lf\n", p);
    printf("área do triângulo: %.2lf\n", area);

    return 0;
}