#include <stdio.h>

int main() {
    int v[10];
    int cont = 0;
    int i;

    for(i = 0; i < 10; i++) {
        scanf("%d", &v[i]);

        if(v[i] > 0) {
            cont++;
        }
    }

    printf("Positivos = %d", cont);

    return 0;
}
