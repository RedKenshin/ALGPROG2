#include <stdio.h>
#define MAX 100

int main() {
    int k[MAX], num, i, j, temp; 
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        scanf("%d", &k[i]);
    }

    for (i = 0; i < num - 1; i++) {
        for (j = 0; j < num - 1; j++) {
            if (k[j] > k[j + 1]) {
                temp = k[j];
                k[j] = k[j + 1];
                k[j + 1] = temp;
            }
        }
    }

    printf("Lista ordenada\n");
    for (i = 0; i < num; i++) {
        printf("%d ", k[i]);
    }

    return 0;
}
