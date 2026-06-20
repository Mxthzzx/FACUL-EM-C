#include <stdio.h>

int main() {
    int v[10];
    int cont = 0;
    int i;

    for(i = 0; i < 10; i++) {
        scanf("%d", &v[i]);

        if(v[i] > 50) {
            cont++;
        }
    }

    printf("Maiores que 50 = %d", cont);

    return 0;
}
