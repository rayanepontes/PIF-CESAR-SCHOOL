#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Digite os tres angulos do triangulo: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0 && a + b + c == 180)
    {
        if (a == 90 || b == 90 || c == 90)
        {
            printf("Triangulo Retangulo.\n");
        }
        else if (a > 90 || b > 90 || c > 90)
        {
            printf("Triangulo Obtusangulo.\n");
        }
        else
        {
            printf("Triangulo Acutangulo.\n");
        }
    }
    else
    {
        printf("Angulos invalidos: nao formam um triangulo.\n");
    }

    return 0;
}