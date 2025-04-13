#include <stdio.h>

int main() {
    double v[100], t;  
    scanf("%lf", &t);

    for (int i = 0; i < 100; i++) {
        v[i] = t;
        t = t / 2.0;
    }


    for (int i = 0; i < 100; i++) {
        printf("N[%d] = %.4lf\n", i, v[i]);
    }

    return 0;
}