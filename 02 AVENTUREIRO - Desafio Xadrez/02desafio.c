#include <stdio.h>

int main() {

    printf("DESAFIO XADREZ - AVENTUREIRO! \n");

    // Implementação de Movimentação da Torre

    printf("Movimentação da Torre: \n");
    int torreMovimento = 5;
    for (int i = 0; i < torreMovimento; i++) {
         printf("Direita \n");
    }

    // Implementação de Movimentação do Bispo 

    printf("\nMovimentação do Bispo: \n");
    int bispoMovimento = 5;
    int i = 0;
    while (i < bispoMovimento) {
        printf("Cima, Direita \n");
        i++;
    }

    // Implementação de Movimentação da Rainha

    printf("\nMovimentação da Rainha: \n");
    int rainhaMovimento = 8;
    int j = 0;
    do {
        printf("Esquerda \n");
        j++;
    } while (j < rainhaMovimento);

    // Implementação de Movimentação do Cavalo

    printf("\n\nMovimentação do Cavalo: \n");
    int cavaloMovimentoVertical = 2;
    int cavaloMovimentoHorizontal = 1;
    for (int k = 0; k < cavaloMovimentoVertical; k++) {
        printf("Baixo \n");
    }
    int l = 0;
    while (l < cavaloMovimentoHorizontal) {
        printf("Esquerda \n");
        l++;
    }
     
    return 0;
    
}