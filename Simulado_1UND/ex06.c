#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0; 

    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        soma += i * i;
    }

    printf("soma final = %d\n", soma);
    system("PAUSE");

    return 0;
}
