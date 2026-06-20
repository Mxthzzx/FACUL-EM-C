#include <stdio.h>

int main() {
    int v[5];
    int soma = 0;
    float media;
    int i;

    for(i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
        soma += v[i];
    }

    media = soma / 5.0;

    printf("Media = %.2f", media);

    return 0;
}
