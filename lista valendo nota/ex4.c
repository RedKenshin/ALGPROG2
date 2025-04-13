#include <stdio.h>

int main(){

    int n,cont =0,aux =0;
    scanf("%d",&n);
    aux = n;
    while (aux > 0){
        aux /= 10;
        cont++;
    }
    printf("o inteiro %d possui %d dígito(s)",n,cont);

return 0;
}
