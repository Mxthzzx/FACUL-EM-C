#include <stdio.h>

int main() {
    int v[5];
    int menor;
    int i;

    for(i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
    }

    menor = v[0];

    for(i = 1; i < 5; i++) {
        if(v[i] < menor) {
            menor = v[i];
        }
    }

    printf("Menor = %d", menor);

    return 0;
}
