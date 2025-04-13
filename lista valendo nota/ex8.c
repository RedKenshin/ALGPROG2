#include <stdio.h>
int main(){
    int a,fatorial,i,j,num,aux;
    scanf("%d",&a);

    for (i = 0; i < a; i++){
        scanf("%d",&fatorial);
        num = 1;
        printf ("%d = ", fatorial);

        for(j=fatorial; j > 0; j--){
            num = num * j;
        }
        for (aux = 1; aux <= fatorial; aux++) {
            if (aux > 1) {
                printf(" *");
            }
            printf(" %d", aux);
        }

        printf(" = %d\n", num);

        
    }
    
    return 0;
}