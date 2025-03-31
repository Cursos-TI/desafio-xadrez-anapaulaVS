#include <stdio.h>

int main() {

    printf("DESAFIO XADREZ - NOVATO! \n");

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


    return 0;
    

}