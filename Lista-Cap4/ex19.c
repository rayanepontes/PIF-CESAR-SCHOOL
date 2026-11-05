#include <stdio.h>

int main()
{
    float A, B, C;

    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &A, &B, &C);

    if (A > 0 && B > 0 && C > 0 &&
        A < B + C && B < A + C && C < A + B)
    {
        if (A == B && B == C)
        {
            printf("Triangulo Equilatero.\n");
        }
        else if (A == B || A == C || B == C)
        {
            printf("Triangulo Isosceles.\n");
        }
        else
        {
            printf("Triangulo Escaleno.\n");
        }
    }
    else
    {
        printf("Erro: Os lados fornecidos nao formam um triangulo!\n");
    }

    return 0;
}