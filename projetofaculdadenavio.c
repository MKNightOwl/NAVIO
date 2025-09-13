#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0}; // inicializa tudo com 0

    // Posicionar navio vertical
    for (int i = 0; i < 3; i++) {
        tabuleiro[1 + i][2] = 3; // posição ocupada
    }

    // Posicionar navio horizontal
    for (int j = 0; j < 4; j++) {
        tabuleiro[5][4 + j] = 3;
    }

    // Posicionar navio diagonal (↘)
    for (int k = 0; k < 3; k++) {
        tabuleiro[2 + k][2 + k] = 3;
    }

    // Posicionar navio diagonal (↙)
    for (int k = 0; k < 3; k++) {
        tabuleiro[7 - k][2 + k] = 3;
    }

    printf("=== Nível Aventureiro ===\nTabuleiro 10x10:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
