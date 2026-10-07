#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char secreta;
    char tentativa;
    int tentativas = 0;

    srand(time(NULL));

    secreta = rand() % 26 + 'a';

    do {
        printf("digite uma letra minuscula: ");
        scanf(" %c", &tentativa);

        tentativas++;

        if (tentativa < secreta) {
            printf("a letra secreta vem depois no alfabeto.\n");
        } else if (tentativa > secreta) {
            printf("a letra secreta vem antes no alfabeto.\n");
        }

    } while (tentativa != secreta);

    printf("parabens! voce acertou!\n");
    printf("tentativas: %d\n", tentativas);

    return 0;
}