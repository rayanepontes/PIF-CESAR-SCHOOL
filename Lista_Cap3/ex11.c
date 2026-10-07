#include <stdio.h>

int main() {
    int a, b, i;

    printf("digite o valor de a: ");
    scanf("%d", &a);

    printf("digite o valor de b: ");
    scanf("%d", &b);

    if (a <= b) {
        for (i = a; i <= b; i++) {
            printf("%d\n", i);
        }
    } else {
        for (i = a; i >= b; i--) {
            printf("%d\n", i);
        }
    }

    return 0;
}