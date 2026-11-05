#include <stdio.h>
#include <math.h>

int main()
{
    float x;

    printf("Digite um numero real: ");
    scanf("%f", &x);

    if (x >= 0)
    {
        printf("Raiz quadrada: %.2f\n", sqrt(x));
    }
    else
    {
        printf("Quadrado do numero: %.2f\n", pow(x, 2));
    }

    return 0;
}