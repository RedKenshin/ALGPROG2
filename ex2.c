#include <stdio.h>

int main(){
    int num1,num2,opcao,resultado;
    scanf("%d %d",&num1,&num2);
    scanf("%d",&opcao);

    if(opcao ==1){
        resultado = num1 + num2;
        printf("Resposta: %d + %d = %d\n",num1,num2,resultado);
    }
    else if(opcao == 2){
        resultado = num1 - num2;
        printf("Resposta: %d - %d = %d\n",num1,num2,resultado);
    }
    else if(opcao == 3){
        if(num2 == 0){
            printf("Erro, divisão por zero não permitida\n");
        }
        else{
            resultado = num1 / num2;
            printf("Resposta: %d / %d = %d\n",num1,num2,resultado);
        }
    }
    else if(opcao ==4){
        resultado = num1 * num2;
        printf("Resposta: %d * %d = %d\n",num1,num2,resultado);
    }
    else{
        printf("Erro! Nenhuma operação selecionada\n");
    }

    return 0;
}