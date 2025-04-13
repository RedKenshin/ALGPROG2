#include <stdio.h>

int main(){
    int valorCompra,valorPago,troco,nota1,nota5,nota10,nota50;
    scanf("%d",&valorCompra);
    scanf("%d",&valorPago);
    troco = valorPago - valorCompra;

    if (troco > 0){
        nota50 = troco/50;
        troco = troco%50;

        nota10 = troco/10;
        troco = troco% 10;
   
        nota5 = troco/5;
        troco = troco %5;
        
        nota1 = troco / 1;
        troco = troco%1;

    }

    else if(valorPago < valorCompra){
        printf("Não tem troco para ser devolvido, valor do pagamento inferior ao valor da compra");
    }
    else{
        printf("Não tem troco a ser devolvido");
    }

    if (nota50 > 0) {
        if(nota50 > 1){
            printf("%d notas de 50\n", nota50);
        }
        else{
            printf("%d nota de 50\n", nota50);
        }

    }
    if (nota10 > 0) {
        if(nota10 > 1){
            printf("%d notas de 10\n", nota10);
        }
        else{
            printf("%d nota de 10\n", nota10);

        }
    }
    if (nota5 > 0) {
        if (nota5 > 1){
            printf("%d notas de 5\n", nota5);

        }
        else{
            printf("%d nota de 5\n", nota5);
        }
    }
    if (nota1 > 0) {
        if (nota1 > 1){
            printf("%d notas de 1\n", nota1);

        }
        else{
            printf("%d nota de 1\n", nota1);

        }
    }
return 0;
}