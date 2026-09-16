#include <stdio.h>
#include <math.h>

int main() {
    float lado_a, lado_b, hipotenusa;

    printf("digite o valor do lado a: ");
    scanf("%f", &lado_a);

    printf("digite o valor do lado b: ");
    scanf("%f", &lado_b);

    hipotenusa = sqrt(lado_a * lado_a + lado_b * lado_b);

    printf("hipotenusa: %.2f\n", hipotenusa);

    return 0;
}