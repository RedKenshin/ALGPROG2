#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    COPAS = 'C',
    ESPADAS = 'E',
    OUROS = 'O',
    PAUS = 'P'
} t_naipe;

typedef struct {
    short valor;
    t_naipe naipe;
} t_carta;

typedef enum {
    CARTA_ALTA,
    PAR,
    DOIS_PARES,
    TRINCA,
    SEQUENCIA,
    FLUSH,
    FULL_HOUSE,
    QUADRA,
    STRAIGHT_FLUSH,
    ROYAL_FLUSH
} t_valor_m;

typedef struct {
    t_carta cartas[5];
    t_valor_m valor;
} t_mao;

int valor_carta(char *carta) {
    if (carta[0] >= '2' && carta[0] <= '9') {
        return carta[0] - '0';
    } else if (carta[0] == '1' && carta[1] == '0') {
        return 10;
    } else {
        switch (carta[0]) {
            case 'J': return 11;
            case 'Q': return 12;
            case 'K': return 13;
            case 'A': return 14;
        }
    }
    return -1; // Erro
}

t_naipe naipe_carta(char naipe) {
    switch (naipe) {
        case 'P': return PAUS;
        case 'O': return OUROS;
        case 'C': return COPAS;
        case 'E': return ESPADAS;
    }
    return -1; // Erro
}

void ordenar_mao(t_carta *mao) {
    for (int i = 1; i < 5; i++) {
        t_carta chave = mao[i];
        int j = i - 1;
        while (j >= 0 && (mao[j].valor > chave.valor || (mao[j].valor == chave.valor && mao[j].naipe > chave.naipe))) {
            mao[j + 1] = mao[j];
            j--;
        }
        mao[j + 1] = chave;
    }
}

void ler_mao(t_carta *mao) {
    char linha[100];
    fgets(linha, sizeof(linha), stdin);
    char *token = strtok(linha, " ");
    for (int i = 0; i < 5; i++) {
        while (token && *token == ' ') token++; // Remover espaços extras
        mao[i].valor = valor_carta(token);
        mao[i].naipe = naipe_carta(token[strlen(token) - 1]);
        token = strtok(NULL, " ");
    }
}

void imprimir_mao(t_carta *mao) {
    for (int i = 0; i < 5; i++) {
        if (mao[i].valor == 10) {
            printf("10%c", mao[i].naipe);
        } else {
            printf("%c%c", " 23456789JQKA"[mao[i].valor], mao[i].naipe);
        }
        if (i < 4) {
            printf(" ");
        }
    }
    printf("\n");
}

int eh_sequencia(t_carta *mao) {
    for (int i = 0; i < 4; i++) {
        if (mao[i].valor + 1 != mao[i + 1].valor) {
            return 0;
        }
    }
    return 1;
}

int eh_flush(t_carta *mao) {
    for (int i = 1; i < 5; i++) {
        if (mao[i].naipe != mao[0].naipe) {
            return 0;
        }
    }
    return 1;
}

t_valor_m avaliar_mao(t_carta *mao) {
    ordenar_mao(mao);
    int valores[15] = {0};
    for (int i = 0; i < 5; i++) {
        valores[mao[i].valor]++;
    }

    int eh_flush = eh_flush(mao);
    int eh_sequencia = eh_sequencia(mao);

    if (eh_flush && eh_sequencia && mao[0].valor == 10) {
        return ROYAL_FLUSH;
    }
    if (eh_flush && eh_sequencia) {
        return STRAIGHT_FLUSH;
    }
    for (int i = 2; i <= 14; i++) {
        if (valores[i] == 4) {
            return QUADRA;
        }
    }
    int tem_trinca = 0, tem_par = 0;
    for (int i = 2; i <= 14; i++) {
        if (valores[i] == 3) {
            tem_trinca = 1;
        }
        if (valores[i] == 2) {
            tem_par++;
        }
    }
    if (tem_trinca && tem_par) {
        return FULL_HOUSE;
    }
    if (eh_flush) {
        return FLUSH;
    }
    if (eh_sequencia) {
        return SEQUENCIA;
    }
    if (tem_trinca) {
        return TRINCA;
    }
    if (tem_par == 2) {
        return DOIS_PARES;
    }
    if (tem_par == 1) {
        return PAR;
    }
    return CARTA_ALTA;
}

int comparar_maos(t_carta *mao1, t_carta *mao2) {
    t_valor_m valor_mao1 = avaliar_mao(mao1);
    t_valor_m valor_mao2 = avaliar_mao(mao2);

    if (valor_mao1 != valor_mao2) {
        return valor_mao1 > valor_mao2 ? 1 : 2;
    }

    ordenar_mao(mao1);
    ordenar_mao(mao2);
    for (int i = 4; i >= 0; i--) {
        if (mao1[i].valor != mao2[i].valor) {
            return mao1[i].valor > mao2[i].valor ? 1 : 2;
        }
        if (mao1[i].naipe != mao2[i].naipe) {
            return mao1[i].naipe > mao2[i].naipe ? 1 : 2;
        }
    }
    return 0; // Empate
}

int main() {
    int k;
    scanf("%d\n", &k);
    for (int i = 0; i < k; i++) {
        t_carta mao1[5], mao2[5];
        ler_mao(mao1);
        ler_mao(mao2);
        int resultado = comparar_maos(mao1, mao2);
        if (resultado == 1) {
            printf("1 ");
            imprimir_mao(mao1);
        } else if (resultado == 2) {
            printf("2 ");
            imprimir_mao(mao2);
        } else {
            printf("E\n");
        }
    }
    return 0;
}
