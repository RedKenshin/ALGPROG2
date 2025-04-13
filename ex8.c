#include <stdio.h>

int main(){
    int a,m,totalPessoas, viagens;
    scanf("%d",&a);
    scanf("%d",&m);
    
    totalPessoas = a+m;

    if(totalPessoas <=50){
        printf("Todos podem subir juntos!\n");
    }
    else if(totalPessoas > 50){
        viagens = (totalPessoas + 10) /50;
            printf("São necessárias no mínimo %d viagens para levar todos vocês!",viagens);
       
    }
}