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

int main() {
    // Nível Novato - Posicionamento dos Navios
    int tabuleiro[tabuleiroTamanhoX][tabuleiroTamanhoY] = {};
    
    posicionarNavioEm(tabuleiro, 0, 0, 5, 1); //Navio posicionado horizontalmente
    posicionarNavioEm(tabuleiro, 4, 1, 1, 4); //Navio posicionado verticalmente

    printf("Tabuleiro atual:\n");
    exibirTabuleiro(tabuleiro);

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1

    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}