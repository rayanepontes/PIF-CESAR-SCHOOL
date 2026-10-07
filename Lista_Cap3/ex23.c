#include <stdio.h>

int main() {
    int l;

    printf("digite a dimensao do quadrado (3 a 20): ");
    scanf("%d", &l);

    if (l < 3 || l > 20) {
        printf("dimensao invalida.\n");
        return 0;
    }

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < l; j++) {
            if (i == 0 || i == l - 1 || j == 0 || j == l - 1) {
                printf("X");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}