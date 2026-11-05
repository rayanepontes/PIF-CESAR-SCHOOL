#include <stdio.h>

int main()
{
    int horas;
    float valor = 0;

    printf("Digite a quantidade de horas de permanencia: ");
    scanf("%d", &horas);

    if (horas <= 0)
    {
        printf("Quantidade de horas invalida!\n");
    }
    else
    {
        if (horas <= 2)
        {
            valor = horas * 2.00;
        }
        else if (horas <= 4)
        {
            valor = (2 * 2.00) + ((horas - 2) * 2.50);
        }
        else
        {
            valor = (2 * 2.00) + (2 * 2.50) + ((horas - 4) * 3.00);
        }

        printf("Tempo total: %d horas\n", horas);
        printf("Valor final: R$ %.2f\n", valor);
    }

    return 0;
}