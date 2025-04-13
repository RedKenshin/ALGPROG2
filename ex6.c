#include <stdio.h>
#include <math.h>

int main(){

    float a,b,c,delta,x1,x2;
    scanf("%f %f %f",&a,&b,&c);
    if (a == 0){
        printf("valor de A é igual a zero, valor não permitido");   	
        return 1;
    }
    delta = b*b -4 * a * c;
    if (delta < 0){
        printf("A equação não possui raízes reais\n");
    }
    else if(delta == 0){
        x1 = (-b + sqrt(delta))/2*a;
        printf("A equação possui uma única raiz: %.2f\n",x1);
        // como o delta é zero, independente se eu fizer x1 e x2, o  resultado sera o mesmo pois é zero
    }
    else{
        x1 = (-b + sqrt(delta))/2*a;
        x2 = (-b - sqrt(delta))/2*a;
        printf("A equação possui as raízes %.2f e %.2f",x1,x2);
        
    }

    return 0;
}