#include <stdio.h>

int main() {
    int n, j, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {              
        for (j = 1; j <= i-1; j++) {    
            printf(" ");
        }
        printf("%d\n", i);                
    }

    return 0;
}