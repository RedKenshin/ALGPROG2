#include <stdio.h>

int primo (int num){
    if (num < 2){
        return 0;
    }
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
          return 0;
        }
   
    }
    return 1;
}

int main(){
    int num;
    scanf("%d",&num); 
    
    if (primo(num) == 1) {
        printf("primo\n");
    } else {
        printf("não primo\n");
    }

    return 0;
}