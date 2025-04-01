#include <stdio.h>

// Função recursiva para simular o movimento da Torre

void torreMovimento(int movimento) {
    if (movimento > 0) {
        printf("Direita\n");
        torreMovimento(movimento - 1);
    }
}

int main() {

    printf("DESAFIO XADREZ - MESTRE! \n");

    return 0;
    
}