#include <stdio.h>

int main() {
    char letras[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }
    //declarando valor que sera o navio
    tabuleiro[1][0] = 3;
    tabuleiro[1][1] = 3;
    tabuleiro[1][2] = 3;
    tabuleiro[5][3] = 3;
    tabuleiro[3][3] = 3;
    tabuleiro[4][3] = 3;

    // Imprime o título
    printf("TABULEIRO BATALHA NAVAL\n");
    printf("   "); // Espaço para alinhar com os números das linhas

    // Imprime as letras 
    for (int j = 0; j < 10; j++) {
        printf("%c ", letras[j]);
    }
    printf("\n");

    // Imprime as linhas com os números
    for (int i = 0; i < 10; i++) {
        printf("%d ", i + 1); // Números das linhas 
        if (i + 1 < 10) printf(" "); // Alinhamento para 1 dígito
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
