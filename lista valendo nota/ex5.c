#include <stdio.h>

int main() {
    int n, aux, multi = 1;
    scanf("%d", &n);
    aux = n;
    printf("%d = ", n);
    while (aux > 0) {
        printf("%d * %d", aux % 10, multi);
        aux /= 10;
        multi *= 10;
        
        if (aux > 0) {
            printf(" + ");
        }
    }

    return 0;
}