#include <stdio.h>

int main()
{
    float trabalho, avaliacao, exame, media;

    printf("Digite a nota do Trabalho de Laboratorio: ");
    scanf("%f", &trabalho);

    printf("Digite a nota da Avaliacao Semestral: ");
    scanf("%f", &avaliacao);

    printf("Digite a nota do Exame Final: ");
    scanf("%f", &exame);

    media = (trabalho * 2 + avaliacao * 3 + exame * 5) / 10;

    printf("Media ponderada: %.2f\n", media);

    if (media >= 5.0)
    {
        printf("Aprovado!\n");
    }
    else if (media >= 3.0)
    {
        printf("Em Recuperacao.\n");
    }
    else
    {
        printf("Reprovado.\n");
    }

    return 0;
}