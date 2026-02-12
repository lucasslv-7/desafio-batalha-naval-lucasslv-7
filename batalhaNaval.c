#include <stdio.h>

int main()
{

    int tabuleiro[5][5] = {0}; // Inicializa tudo com 0

    /*
    Começa na posição (1,2) e ocupa 3 posições para baixo.
    */
    int linha_vertical = 1;
    int coluna_vertical = 2;

    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linha_vertical + i][coluna_vertical] = 3;
    }

    /*
    Começa na posição (4,0) e ocupa 3 posições para direita.
    */
    int linha_horizontal = 4;
    int coluna_horizontal = 0;

    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linha_horizontal][coluna_horizontal + i] = 3;
    }

    /*
    Exibe coordenadas ocupadas
    */
    printf("Coordenadas ocupadas pelos navios:\n\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            if (tabuleiro[i][j] == 3)
            {
                printf("Navio em: (%d,%d)\n", i, j);
            }
        }
    }

    return 0;
}
