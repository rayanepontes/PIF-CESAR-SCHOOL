#include <stdio.h>

int main() {
    int senha_secreta = 2026;
    int senha;
    int acertou = 0;

    for (int tentativa = 1; tentativa <= 3; tentativa++) {
        printf("digite a senha: ");
        scanf("%d", &senha);

        if (senha == senha_secreta) {
            printf("acesso concedido!\n");
            printf("tentativas utilizadas: %d\n", tentativa);
            acertou = 1;
            break;
        }
    }

    if (!acertou) {
        printf("conta bloqueada por seguranca!\n");
    }

    return 0;
}