#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int mt = 0; mt < 5; mt++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal (cima e direita)
    printf("\nMovimento do Bispo (5 casas na diagonal para cima e direita):\n");
    int mb = 0;
    while (mb < 5) {
        printf("Cima Direita\n");
        mb++;
    }

    // Movimento da Rainha: 8 casas para a esquerda
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int mr = 0;
    do {
        printf("Esquerda\n");
        mr++;
    } while (mr < 8);

    // Movimento do Cavalo: 2 casas para baixo e 1 casa para a esquerda
    printf("\nMovimento do Cavalo (2 casas para baixo e 1 casa para a esquerda):\n");

    // Primeiro loop para o movimento de 2 casas para baixo
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }

    // Segundo loop para o movimento de 1 casa para a esquerda
    int j = 0;
    while (j < 1) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}