#include <stdio.h>

int main (){
    int p1,c1,p2,c2, esquerdo,direito;
    scanf("%d %d %d %d",&p1,&c1,&p2,&c2);
    esquerdo = p1*c1;
    direito = p2*c2;
    if (esquerdo > direito){
        printf("-1");
    }
    else if( esquerdo < direito){
        printf ("1");
    }
    else{
        printf("0");
    }
    return 0;
}