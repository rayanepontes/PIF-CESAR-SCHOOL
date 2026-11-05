#include <stdio.h>

int main()
{
    int dia, mes, ano;
    char *nomeMes;

    printf("Digite a data (dia mes ano): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    switch (mes)
    {
        case 1:
            nomeMes = "janeiro";
            break;

        case 2:
            nomeMes = "fevereiro";
            break;

        case 3:
            nomeMes = "marco";
            break;

        case 4:
            nomeMes = "abril";
            break;

        case 5:
            nomeMes = "maio";
            break;

        case 6:
            nomeMes = "junho";
            break;

        case 7:
            nomeMes = "julho";
            break;

        case 8:
            nomeMes = "agosto";
            break;

        case 9:
            nomeMes = "setembro";
            break;

        case 10:
            nomeMes = "outubro";
            break;

        case 11:
            nomeMes = "novembro";
            break;

        case 12:
            nomeMes = "dezembro";
            break;

        default:
            printf("Erro: Mes invalido!\n");
            return 0;
    }

    if (dia >= 1 && dia <= 31 && ano > 0)
    {
        printf("%d de %s de %d\n", dia, nomeMes, ano);
    }
    else
    {
        printf("Erro: Data invalida!\n");
    }

    return 0;
}