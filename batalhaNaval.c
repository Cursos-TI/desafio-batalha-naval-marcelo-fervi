#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.

//const int tabuleiroTamanhoX = 5, tabuleiroTamanhoY = 5;
const int tabuleiroTamanhoX = 10, tabuleiroTamanhoY = 10;

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





//Padrão da direção diagonal é hardcoded (para baixo e para a direita)
static void posicionarNavioDiagonalmenteEm(int tabuleiro[tabuleiroTamanhoX][tabuleiroTamanhoY], int posicaoX, int posicaoY, int larguraX, int alturaY) {
    int posicaoFinalX = posicaoX + larguraX;
    int posicaoFinalY = posicaoY + alturaY;
    for (int y = posicaoY; y < posicaoFinalY; y++) {
        for (int x = posicaoX; x < posicaoFinalX; x++) {
            tabuleiro[y][x] = 3; //Indicador de presença de navio

            y++;
        }
    }
}

void desafioAventureiro() {
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    int tabuleiro[tabuleiroTamanhoX][tabuleiroTamanhoY] = {};

    posicionarNavioEm(tabuleiro, 0, 0, 5, 1); //Navio posicionado horizontalmente
    posicionarNavioEm(tabuleiro, 4, 1, 1, 4); //Navio posicionado verticalmente
    posicionarNavioDiagonalmenteEm(tabuleiro, 0, 5, 5, 1); //Navio posicionado diagonalmente
    posicionarNavioDiagonalmenteEm(tabuleiro, 2, 5, 5, 1); //Navio posicionado diagonalmente

    printf("Tabuleiro atual:\n");
    exibirTabuleiro(tabuleiro);
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
    int tabuleiro[tabuleiroTamanhoX][tabuleiroTamanhoY] = {};

    posicionarCruzEm(tabuleiro, 2, 0);
    posicionarOctaedroEm(tabuleiro, 8, 0);
    posicionarConeEm(tabuleiro, 5, 6);

    printf("Tabuleiro atual:\n");
    exibirTabuleiro(tabuleiro);
}

int main() {
    //desafioNovato();
    //desafioAventureiro();
    desafioMestre();

    return 0;
}