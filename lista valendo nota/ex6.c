#include <stdio.h>
#include <string.h>
#define MAX 20

void mediaAR(float media, float notaAP, char mensagem[MAX]) {
    if (notaAP >= media) {  
        strcpy(mensagem, "Aprovado");
    } else {
        strcpy(mensagem, "Reprovado");
    }
}

int main(){
    float media, notaAP;
    char mensagem[MAX];

    scanf("%f %f", &media,&notaAP);
    mediaAR(media,notaAP,mensagem);

    printf("%.1f %s\n", notaAP, mensagem);

    return 0;
}