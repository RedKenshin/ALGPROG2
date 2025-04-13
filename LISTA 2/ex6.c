#include <stdio.h>
int main(){
    int a,fatorial,i,j,num;
    scanf("%d",&a);

    for (i = 0; i < a; i++){
        scanf("%d",&fatorial);
        num = 1;
        for(j=fatorial; j > 0; j--){
            num = num * j;
        }
        printf("%d! = %d\n",fatorial, num);
        
    }
    
    return 0;
}