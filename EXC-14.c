#include <stdio.h>

int main() {
    int v[5];
    int i;

    for(i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
    }

    for(i = 4; i >= 0; i--) {
        printf("%d ", v[i]);
    }

    return 0;
}
