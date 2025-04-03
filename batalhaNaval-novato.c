#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.

const int tabuleiroTamanhoX = 5, tabuleiroTamanhoY = 5;

static void posicionarNavioEm(int tabuleiro[tabuleiroTamanhoX][tabuleiroTamanhoY], int posicaoX, int posicaoY, int larguraX, int alturaY) {
    int posicaoFinalX = posicaoX + larguraX;
    int posicaoFinalY = posicaoY + alturaY;
    for (int y = posicaoY; y < posicaoFinalY; y++) {
        for (int x = posicaoX; x < posicaoFinalX; x++) {
            tabuleiro[y][x] = 3; //Indicador de presença de navio
        }
    }
}

static void exibirTabuleiro(int tabuleiro[tabuleiroTamanhoX][tabuleiroTamanhoY]) {
    for (int x = 0; x < tabuleiroTamanhoX; x++) {
        for (int y = 0; y < tabuleiroTamanhoY; y++) {
            printf("%d ", tabuleiro[x][y]);
        }

        printf("\n");
    }
}

void desafioNovato() {
    // Nível Novato - Posicionamento dos Navios
    int tabuleiro[tabuleiroTamanhoX][tabuleiroTamanhoY] = {};

    posicionarNavioEm(tabuleiro, 0, 0, 5, 1); //Navio posicionado horizontalmente
    posicionarNavioEm(tabuleiro, 4, 1, 1, 4); //Navio posicionado verticalmente

    printf("Tabuleiro atual:\n");
    exibirTabuleiro(tabuleiro);
}


int main() {
    desafioNovato();

    return 0;
}