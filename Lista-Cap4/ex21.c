#include <stdio.h>

int main()
{
    float salario, aumento, novoSalario;
    int cargo;

    printf("Digite o salario atual: R$ ");
    scanf("%f", &salario);

    printf("Digite o codigo do cargo:\n");
    printf("1 - Tecnico\n");
    printf("2 - Gerente\n");
    printf("3 - Demais Cargos\n");
    printf("Opcao: ");
    scanf("%d", &cargo);

    switch (cargo)
    {
        case 1:
            aumento = (salario <= 3000) ? salario * 0.15 : salario * 0.10;
            break;

        case 2:
            aumento = (salario <= 5000) ? salario * 0.10 : salario * 0.05;
            break;

        case 3:
            aumento = salario * 0.08;
            break;

        default:
            printf("Cargo invalido!\n");
            return 0;
    }

    novoSalario = salario + aumento;

    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", novoSalario);

    return 0;
}