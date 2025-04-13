#include <stdio.h>

int main(){
    float lado1,lado2,lado3;
    scanf("%f",&lado1);
    scanf("%f",&lado2);
    scanf("%f",&lado3);

    if(lado1 == lado2 && lado2 == lado3){
        printf("lados: %.2f, %.2f, %.2f - equilátero\n",lado1,lado2,lado3);

    }
    else if(lado1 == lado2 || lado2 == lado3 || lado1 == lado3){
        if( lado1 + lado2 == lado3){
        printf("lados: %.2f, %.2f, %.2f - não formam um triângulo\n",lado1,lado2,lado3);
        }
        else{
        printf("lados: %.2f, %.2f, %.2f - isósceles\n",lado1,lado2,lado3);

        }
    }
        else if(lado1 != lado2 || lado2 != lado3 || lado1 != lado3){
        printf("lados: %.2f, %.2f, %.2f - escaleno\n",lado1,lado2,lado3);
    }

return 0;

}