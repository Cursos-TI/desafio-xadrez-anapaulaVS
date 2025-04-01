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

    return 0;
    
}