#include <stdio.h>

int main() {
    int k, contador = 0, num = 2,linha = 0;
    scanf("%d", &k);

    while (contador < k) {
        int divisores = 0;
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                divisores++;
            }
        }  

        if (divisores == 2) {
    
            printf("%d ", num);
            contador++;
            linha++;
            if (linha == 10){
                printf("\n");
                linha = 0;
            }
        }

        num++; 
    }
    printf("\n");
    return 0;
}
