#include <stdio.h>

// Função recursiva para mover a Torre 
void movimentoTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        movimentoTorre(casas - 1); 
    }
}

// Função recursiva para mover o Bispo (5 casas na diagonal para cima e direita)
void movimentoBispo(int casas) {
    if (casas > 0) {
        printf("Cima Direita\n");
        movimentoBispo(casas - 1); 
    }
}

// Função recursiva para mover a Rainha (8 casas para a esquerda)
void movimentoRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        movimentoRainha(casas - 1); 
    }
}

void movimentoCavalo() {
    int movimentoVertical = 2; // Movimento para cima
    int movimentoHorizontal = 1; // Movimento para a direita
    int i = 0, j = 0;

    // Usando múltiplas variáveis e condições para o movimento do Cavalo
    while (i < movimentoVertical) {
        if (i < movimentoVertical) {
            printf("Cima\n");
            i++;
        }
    }

    // Usando uma condição extra para o movimento horizontal
    while (j < movimentoHorizontal) {
        if (j < movimentoHorizontal) {
            printf("Direita\n");
            j++;
        }
    }
}

int main() {
    // Movimento da Torre: 5 casas para a direita usando recursividade
    printf("Movimento da Torre (5 casas para a direita):\n");
    movimentoTorre(5);
    printf("\n");

    // Movimento do Bispo: 5 casas na diagonal para cima e direita usando recursividade
    printf("Movimento do Bispo (5 casas na diagonal para cima e direita):\n");
    movimentoBispo(5);
    printf("\n");

    // Movimento da Rainha: 8 casas para a esquerda usando recursividade
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    movimentoRainha(8);
    printf("\n");

    // Movimento do Cavalo (2 casas para cima e 1 para a direita) usando loops aninhados
    printf("Movimento do Cavalo (2 casas para cima e 1 para a direita):\n");
    movimentoCavalo();
    printf("\n");

    return 0;
}