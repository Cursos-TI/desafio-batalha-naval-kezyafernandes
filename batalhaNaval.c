#include <stdio.h>

#define TAM 10

int main() {
    // Declaração da matriz para o tabuleiro
    int tabuleiro[TAM][TAM] = {0};

    // Posicionamento do navio vertical
    int navioVerticalX = 5;
    int navioVerticalY = 2;
    int tamanhoNavio = 3;

    // Posicionamento do navio horizontal
    int navioHorizontalX = 2;
    int navioHorizontalY = 5;

    // Posicionamento dos navios no tabuleiro
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[navioVerticalX + i][navioVerticalY] = 1;
        tabuleiro[navioHorizontalX][navioHorizontalY + i] = 1;
    }

    // Exibição das coordenadas dos navios
    printf("Coordenadas do Navio Vertical:\n");
    for (int i = 0; i < tamanhoNavio; i++) {
        printf("(%d, %d)\n", navioVerticalX + i, navioVerticalY);
    }

    printf("\nCoordenadas do Navio Horizontal:\n");
    for (int i = 0; i < tamanhoNavio; i++) {
        printf("(%d, %d)\n", navioHorizontalX, navioHorizontalY + i);
    }

    return 0;
}


