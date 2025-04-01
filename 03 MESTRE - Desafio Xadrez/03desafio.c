#include <stdio.h>

// Função recursiva para simular o movimento da Torre

void torreMovimento(int movimento) {
    if (movimento > 0) {
        printf("Direita\n");
        torreMovimento(movimento - 1);
    }
}

// Função recursiva para simular o movimento do Bispo

void bispoMovimento(int movimento) {
    if (movimento > 0) {
        printf("Cima, Direita\n");
        bispoMovimento(movimento - 1);
    }
}

// Implementação de Movimentação do Bispo com Loops Aninhados

void bispoMovimentoAninhado(int movimentoVertical, int movimentoHorizontal) {
    for (int i = 0; i < movimentoVertical; i++) {
        for (int j = 0; j < movimentoHorizontal; j++) {
            printf("Cima, Direita\n");
        }
        printf("\n");
    }
}

// Função recursiva para simular o movimento da Rainha

void rainhaMovimento(int movimento) {
    if (movimento > 0) {
        printf("Esquerda\n");
        rainhaMovimento(movimento - 1);
    }
}

int main() {

    printf("DESAFIO XADREZ - MESTRE! \n");

    // Implementação de Movimentação da Torre

    printf("Movimentação da Torre:\n");
    int torreMovimentoTotal = 5;
    torreMovimento(torreMovimentoTotal);

    // Implementação de Movimentação do Bispo

    printf("\nMovimentação do Bispo:\n");
    int bispoMovimentoTotal = 5;
    bispoMovimento(bispoMovimentoTotal);
    printf("\nMovimentação do Bispo com Loops Aninhados:\n");
    int bispoMovimentoVertical = 2;
    int bispoMovimentoHorizontal = 3;
    bispoMovimentoAninhado(bispoMovimentoVertical, bispoMovimentoHorizontal);

    // Implementação de Movimentação da Rainha

    printf("\nMovimentação da Rainha:\n");
    int rainhaMovimentoTotal = 8;
    rainhaMovimento(rainhaMovimentoTotal);

    // Implementação de Movimentação do Cavalo

    printf("\n\nMovimentação do Cavalo:\n");
    int cavaloMovimentoVertical = 2;
    int cavaloMovimentoHorizontal = 1;
    for (int i = 0; i < cavaloMovimentoVertical; i++) {
        printf("Cima\n");
    }
    for (int i = 0; i < cavaloMovimentoHorizontal; i++) {
        printf("Direita\n");
    }


    return 0;
    
    
}