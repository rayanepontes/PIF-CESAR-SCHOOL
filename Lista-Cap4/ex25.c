#include <stdio.h>

int main()
{
    int valorPagar, valorEntregue, troco;

    printf("Digite o valor total a pagar: R$ ");
    scanf("%d", &valorPagar);

    printf("Digite o valor entregue: R$ ");
    scanf("%d", &valorEntregue);

    if (valorPagar <= 0 || valorEntregue <= 0)
    {
        printf("Erro: Valores invalidos!\n");
    }
    else if (valorEntregue < valorPagar)
    {
        printf("Erro: Valor entregue insuficiente!\n");
    }
    else
    {
        troco = valorEntregue - valorPagar;

        printf("Troco: R$ %d\n", troco);

        printf("Cedulas de R$ 100: %d\n", troco / 100);
        troco %= 100;

        printf("Cedulas de R$ 50: %d\n", troco / 50);
        troco %= 50;

        printf("Cedulas de R$ 20: %d\n", troco / 20);
        troco %= 20;

        printf("Cedulas de R$ 10: %d\n", troco / 10);
        troco %= 10;

        printf("Cedulas de R$ 5: %d\n", troco / 5);
        troco %= 5;

        printf("Cedulas de R$ 2: %d\n", troco / 2);
        troco %= 2;

        if (troco > 0)
        {
            printf("Resto sem cedula disponivel: R$ %d\n", troco);
        }
    }

    return 0;
}