#include <stdio.h>

int main()
{
    int a, b, c, temp;

    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    if (a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }

    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }

    if (a < b && b < c)
    {
        printf("Ordem crescente: %d, %d, %d\n", a, b, c);
    }
    else
    {
        printf("Nao e possivel obter uma ordem estritamente crescente, pois existem valores repetidos.\n");
    }

    return 0;
}