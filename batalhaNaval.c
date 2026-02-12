#include <stdio.h>

void imprimirMatriz(int matriz[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {

    /*
    HABILIDADE 1 - CONE
    */
    int cone[5][5] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 2 - i; j <= 2 + i; j++) {
            cone[i][j] = 1;
        }
    }

    printf("Habilidade Cone:\n");
    imprimirMatriz(cone);
    printf("\n");

    /*
    HABILIDADE 2 - CRUZ
    */
    int cruz[5][5] = {0};

    for (int i = 0; i < 5; i++) {
        cruz[2][i] = 1; 
        cruz[i][2] = 1; 
    }

    printf("Habilidade Cruz:\n");
    imprimirMatriz(cruz);
    printf("\n");

    /*
    HABILIDADE 3 - OCTAEDRO
    */
    int octaedro[5][5] = {0};

    octaedro[0][2] = 1;
    octaedro[1][1] = 1;
    octaedro[1][2] = 1;
    octaedro[1][3] = 1;
    octaedro[2][2] = 1;

    printf("Habilidade Octaedro:\n");
    imprimirMatriz(octaedro);

    return 0;
}
