#include <stdio.h>

int main(){
    int num1,num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    

    if(num2%num1 ==0){
        printf("%d é divisor de %d\n",num1, num2);
    }
    else{
        printf("%d não é divisor de %d\n",num1, num2);
    }

    return 0;
}