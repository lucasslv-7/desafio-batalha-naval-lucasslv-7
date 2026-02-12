#include <stdio.h>

int main() {

    int tabuleiro[10][10] = {0}; 

    /*
    NAVIO 1 - VERTICAL
    */
    for (int i = 0; i < 4; i++) {
        tabuleiro[1 + i][2] = 3;
    }

    /*
    NAVIO 2 - HORIZONTAL
    */
    for (int i = 0; i < 4; i++) {
        tabuleiro[6][3 + i] = 3;
    }

    /*
    NAVIO 3 - DIAGONAL PRINCIPAL
    */
    for (int i = 0; i < 4; i++) {
        tabuleiro[2 + i][2 + i] = 3;
    }

    /*
    NAVIO 4 - DIAGONAL SECUNDÁRIA
    */
    for (int i = 0; i < 4; i++) {
        tabuleiro[7 - i][1 + i] = 3;
    }

    /*
    Exibição completa do tabuleiro
    */
    printf("Tabuleiro 10x10:\n\n");

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
