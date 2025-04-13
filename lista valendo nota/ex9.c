#include <stdio.h>
#define MAX 16
int main(){
    int num = 0, v[MAX] ={0},i =0,contador =0;
    while (contador < 100){
        scanf ("%d", &num);
        if(num == -1){
            break;
        }
        if( num >=0 && num < MAX){
            v[num] += 1;
        }
        contador++;
    }
    for (i = 0; i < MAX ; i++) {
        printf("O inteiro %d apareceu %d vezes na sequência de entrada\n", i, v[i]);
    }

    return 0;
}