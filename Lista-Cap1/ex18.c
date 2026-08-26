#include <stdio.h>

int main() {
    float lapis = 4.88;
    float borrachas = 234.54;
    float canetas = 42.04;
    float cadernos = 8.00;
    float fitas = 13.05;

    printf("%-12s %12.2f\n", "lapis", lapis);
    printf("%-12s %12.2f\n", "borrachas", borrachas);
    printf("%-12s %12.2f\n", "canetas", canetas);
    printf("%-12s %12.2f\n", "cadernos", cadernos);
    printf("%-12s %12.2f\n", "fitas", fitas);

    return 0;
}