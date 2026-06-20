#include <stdio.h>

int main() {
    int v[5];
    int encontrou = 0;
    int i;

    for(i = 0; i < 5; i++) {
        scanf("%d", &v[i]);

        if(v[i] == 10) {
            encontrou = 1;
        }
    }

    if(encontrou) {
        printf("Numero encontrado");
    } else {
        printf("Numero nao encontrado");
    }

    return 0;
}
