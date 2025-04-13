#include <stdio.h>

int main() {
    int n, j, i;
    scanf("%d", &n);
    for (i = n; i > 0; i--) {              
        for (j = 0; j < (n - i); j++) {    
            printf(" ");
        }
        printf("%d\n", i);                
    }

    return 0;
}