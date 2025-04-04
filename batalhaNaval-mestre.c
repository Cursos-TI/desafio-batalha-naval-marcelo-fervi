#include <stdio.h>
#include <string.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.

const int tabuleiroTamanhoX = 10, tabuleiroTamanhoY = 10;

static void exibirTabuleiro(int tabuleiro[tabuleiroTamanhoX][tabuleiroTamanhoY]) {
    for (int x = 0; x < tabuleiroTamanhoX; x++) {
        for (int y = 0; y < tabuleiroTamanhoY; y++) {
            printf("%d ", tabuleiro[x][y]);
        }

        printf("\n");
    }
}



static void posicionarConeEm(int tabuleiro[tabuleiroTamanhoX][tabuleiroTamanhoY], int posicaoX, int posicaoY) {
    int proximaPosicaoX = posicaoX, proximaPosicaoY = posicaoY;
    for (int i = 0; i < 3; i++) {
        if (i == 0) {
            tabuleiro[proximaPosicaoY][proximaPosicaoX] = 1;
        }
        else if (i == 1) {
            for (int j = -1; j <= 1; j++) {
                tabuleiro[proximaPosicaoY][proximaPosicaoX + j] = 1;
            }
        }
        else if (i == 2) {
            for (int j = -2; j <= 2; j++) {
                tabuleiro[proximaPosicaoY][proximaPosicaoX + j] = 1;
            }
        }

        proximaPosicaoY++;
    }
}

static void posicionarOctaedroEm(int tabuleiro[tabuleiroTamanhoX][tabuleiroTamanhoY], int posicaoX, int posicaoY) {
    int proximaPosicaoX = posicaoX, proximaPosicaoY = posicaoY;
    for (int i = 0; i < 3; i++) {
        if (i == 0) {
            tabuleiro[proximaPosicaoY][proximaPosicaoX] = 1;
        }
        else if (i == 1) {
            for (int j = -1; j <= 1; j++) {
                tabuleiro[proximaPosicaoY][proximaPosicaoX + j] = 1;
            }
        }
        else if (i == 2) {
            tabuleiro[proximaPosicaoY][proximaPosicaoX] = 1;
        }

        proximaPosicaoY++;
    }
}

static void posicionarCruzEm(int tabuleiro[tabuleiroTamanhoX][tabuleiroTamanhoY], int posicaoX, int posicaoY) {
    int proximaPosicaoX = posicaoX, proximaPosicaoY = posicaoY;
    for (int i = 0; i < 3; i++) {
        if (i == 0) {
            tabuleiro[proximaPosicaoY][proximaPosicaoX] = 1;
        }
        else if (i == 1) {
            for (int j = -2; j <= 2; j++) {
                tabuleiro[proximaPosicaoY][proximaPosicaoX + j] = 1;
            }
        }
        else if (i == 2) {
            tabuleiro[proximaPosicaoY][proximaPosicaoX] = 1;
        }

        proximaPosicaoY++;
    }
}

void desafioMestre() {
    // Nível Mestre - Habilidades Especiais com Matrizes
    int tabuleiro[tabuleiroTamanhoX][tabuleiroTamanhoY];
    memset(tabuleiro, 0, sizeof(tabuleiro));

    posicionarCruzEm(tabuleiro, 2, 0); //Cruz no topo esquerdo
    posicionarOctaedroEm(tabuleiro, 8, 0); //Octaedro no topo direito
    posicionarConeEm(tabuleiro, 5, 6); //Cone embaixo no centro

    printf("Tabuleiro atual:\n");
    exibirTabuleiro(tabuleiro);
}

int main() {
    desafioMestre();

    return 0;
}