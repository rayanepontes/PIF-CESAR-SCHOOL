#include <stdio.h>

int main() {
    const int senha = 2026;
    int senha_digitada;
    int tentativas = 0;
    int acesso_concedido = 0;

    while (tentativas < 3) {
        printf("digite a senha numérica (%dª tentativa): ", tentativas + 1);
        scanf("%d", &senha_digitada);

        if (senha_digitada == senha) {
            acesso_concedido = 1;
            break;
        } else {
            printf("senha incorreta!\n");
            tentativas++;
        }
    }

    if (acesso_concedido) {
        printf("\nacesso Concedido!\n");
    } else {
        printf("\nconta nloqueada por segurança!\n");
    }

    return 0;
}