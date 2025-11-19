#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.
#define linha 3
#define coluna 5
int main() {
    // declarei e inicializei as váriaveis
    int tabuleiro[10][10]; // o tabuleiro eu só declarei 10x10
    int navioh[3] = {3, 3, 3};
    int naviov[3] = {3, 3, 3};
    int naviodg1[4] = {3, 3, 3, 3};
    int naviodg2[4] = {3, 3, 3, 3};
    int habilidade[linha][coluna];
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
// aqui é onde eu descrevo onde quero o cone
for (int i = 0; i < linha; i++){
   for(int j = 0; j < coluna; j++){
    if (j >= 2 - i && j <= 2 + i){
        habilidade[i][j] = 1;}
    else {
        habilidade[i][j] = 0;
    }
    }
}
// onde for 1 vai substituir por 5
for( int i = 0; i < linha; i++){
    for (int j = 0; j < coluna; j++){
        if(habilidade[i][j] == 1){
            tabuleiro[i][j] = 5;
        }
        }
    }

    // cruz parte vertical
for (int i = 0; i < 5; i++){
    tabuleiro[5-2+ i][6] = 5;
}
 // cruz parte horizontal
for (int i = 0; i < 5; i++){
    tabuleiro[5][6 - 2 + i] = 5;}

   // octaedro parte vertical
    for (int i = 0; i < 3; i++){
    tabuleiro[5-1+ i][1] = 5;}

// octaedro parte horizontal
      for (int i = 0; i < 3; i++){
    tabuleiro[5][1-1+i] = 5;}

    printf("Tabuleiro de Batalha Naval\n");
    // esse loop aninhado é para imprimir o tabuleiro com os navios.
    for ( int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
