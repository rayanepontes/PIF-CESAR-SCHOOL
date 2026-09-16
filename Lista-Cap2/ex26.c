#include <stdio.h>

int main() {
    float comprimento, largura, preco;
    float perimetro, metros_arame, custo;

    printf("digite o comprimento do terreno em metros: ");
    scanf("%f", &comprimento);

    printf("digite a largura do terreno em metros: ");
    scanf("%f", &largura);

    printf("digite o preco do metro de arame: ");
    scanf("%f", &preco);

    perimetro = 2 * (comprimento + largura);
    metros_arame = perimetro * 3;
    custo = metros_arame * preco;

    printf("metros de arame: %.2f\n", metros_arame);
    printf("custo total: r$ %.2f\n", custo);

    return 0;
}