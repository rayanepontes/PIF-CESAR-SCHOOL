#include <stdio.h>

#define DOBRO(x) x * 2

int dobro(int x);

int main() {
    int resultadoMacro, resultadoFuncao;

    resultadoMacro = DOBRO(2 + 3);
    resultadoFuncao = dobro(2 + 3);

    printf("Resultado da macro = %d\n", resultadoMacro);
    printf("Resultado da funcao = %d\n", resultadoFuncao);
    printf("\nMacro corrigida = %d\n", DOBRO_CORRIGIDO(2 + 3));

    return 0;
}

int dobro(int x) {
    return x * 2;
}