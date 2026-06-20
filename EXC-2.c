#include <stdio.h>

int main() {
    int v[5];
    int soma = 0;
    int i;

    for(i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
        soma += v[i];
    }

    printf("Soma = %d", soma);

    return 0;
}
