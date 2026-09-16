#include <stdio.h>

int main() {
    float altura_degrau, altura_total;
    int quantidade_degraus;

    printf("digite a altura de cada degrau em cm: ");
    scanf("%f", &altura_degrau);

    printf("digite a altura total em metros: ");
    scanf("%f", &altura_total);

    altura_total = altura_total * 100;

    quantidade_degraus = (int)(altura_total / altura_degrau);

    if (altura_total > quantidade_degraus * altura_degrau) {
        quantidade_degraus++;
    }

    printf("numero minimo de degraus: %d\n", quantidade_degraus);

    return 0;
}