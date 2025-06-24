#include <stdio.h>

int main() {
    // Definições constantes de movimentos
    const int movimentos_bispo = 5;
    const int movimentos_torre = 5;
    const int movimentos_rainha = 8;

    int i; // variável de controle comum

    // === BISPO ===
    // Movimento: 5 vezes na diagonal superior direita (Cima + Direita)
    printf("Movimento do Bispo:\n");
    for (i = 0; i < movimentos_bispo; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    printf("\n");

    // === TORRE ===
    // Movimento: 5 vezes para a Direita
    printf("Movimento da Torre:\n");
    i = 0;
    while (i < movimentos_torre) {
        printf("Direita\n");
        i++;
    }

    printf("\n");

    // === RAINHA ===
    // Movimento: 8 vezes para a Esquerda
    printf("Movimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < movimentos_rainha);

    return 0;
}
