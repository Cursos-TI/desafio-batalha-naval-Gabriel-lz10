#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // declarei e inicializei as váriaveis
    int tabuleiro[10][10]; // o tabuleiro eu só declarei 10x10
    int navioh[3] = {3, 3, 3};
    int naviov[3] = {3, 3, 3};
    int naviodg1[4] = {3, 3, 3, 3};
    int naviodg2[4] = {3, 3, 3, 3};
// através do for iniializei o valor "0" a matriz "tabuleiro".
    for (int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }
// declarei o primeiro navio na horizontal
for(int k = 0; k < 3; k++){
    tabuleiro[3][1 + k] = navioh[k];
}
// declarei o segundo navio na vertical
for(int k = 0; k < 3; k++){
    tabuleiro[7 +k][7] = naviov[k];
}
// declarei navio na diagonal de baixo para cima
for (int i = 0; i < 4; i++){
    tabuleiro[9-i][1+i] = naviodg1[i];
}
// declarei navio na diagonal de cima para baixo
for (int i = 0; i < 4; i++){
    tabuleiro[0+i][4+i] = naviodg2[i];
}
//
    printf("Tabuleiro de Batalha Naval\n");
    // esse loop aninhado é para imprimir o tabuleiro com os navios.
    for ( int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
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
