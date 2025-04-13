#include <stdio.h>

int main(){
    float nota1,nota2,nota3,media,carga_horaria,horaria_comprida,aux,aux1;
    scanf("%f %f %f",&nota1,&nota2,&nota3);
    scanf("%f",&carga_horaria);
    scanf("%f",&horaria_comprida);

    media = (nota1 + nota2 + nota3)/2;
    aux = (carga_horaria * 0.75);
    aux1 = (horaria_comprida);

    if(media >= 6 && aux1 >= aux){
        printf("Aprovado\n");
    }
    else{
        printf("Reprovado\n");
    }

return 0;


}