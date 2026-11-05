#include <stdio.h>

int main()
{
    float nota;
    int faltas;
    char conceito;

    printf("Digite a nota final: ");
    scanf("%f", &nota);

    printf("Digite o numero de faltas: ");
    scanf("%d", &faltas);

    if (nota >= 9.0 && nota <= 10.0)
    {
        conceito = (faltas <= 20) ? 'A' : 'B';
    }
    else if (nota >= 7.5 && nota < 9.0)
    {
        conceito = (faltas <= 20) ? 'B' : 'C';
    }
    else if (nota >= 5.0 && nota < 7.5)
    {
        conceito = (faltas <= 20) ? 'C' : 'D';
    }
    else if (nota >= 4.0 && nota < 5.0)
    {
        conceito = (faltas <= 20) ? 'D' : 'E';
    }
    else if (nota >= 0.0 && nota < 4.0)
    {
        conceito = 'E';
    }
    else
    {
        printf("Nota invalida!\n");
        return 0;
    }

    if (faltas < 0)
    {
        printf("Numero de faltas invalido!\n");
    }
    else
    {
        printf("Conceito: %c\n", conceito);
    }

    return 0;
}