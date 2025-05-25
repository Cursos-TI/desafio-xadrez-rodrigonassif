#include <stdio.h>

// Função recursiva para mover a Torre para a direita
void moverTorre(int passos) {
    if (passos > 0) {
    printf("Direita\n");
    moverTorre(passos - 1);
    }
    
}

// Função recursiva para mover a Rainha para a esquerda
void moverRainha(int passos) {
    if (passos > 0) {
    printf("Esquerda\n");
    moverRainha(passos - 1);
    }
   
}

// Função recursiva para movimentação do Bispo com loops aninhados
void moverBispo(int vertical, int horizontal) {
    if (vertical > 0) {

    // Loop interno representa movimento horizontal
    for (int j = 0; j < horizontal; j++) {
        printf("Direita ");
    }
    // Movimento vertical impresso após o horizontal
    printf("-> Cima\n");

    moverBispo(vertical - 1, horizontal);
}

    }


int main() {

    printf("**** Bem Vindo ao Desafio Mestre do Xadrez em C! ****\n");
    // Número de passos para cada peça
    int passosTorre = 5;
    int passosRainha = 5;
    int passosBispo = 5; // vertical
    int passosBispoHorizontal = 1; // horizontal por passo vertical

    // ------------------- TORRE -------------------
    printf("Movimento da Torre: %d casas para Direita\n", passosTorre);
    moverTorre(passosTorre);

    // ------------------- BISPO -------------------
    printf("\nMovimento do Bispo: %d casas na Diagonal Superior Direita\n", passosBispo);
    moverBispo(passosBispo, passosBispoHorizontal);

    // ------------------- RAINHA -------------------
    printf("\nMovimento da Rainha: %d casas para Esquerda\n", passosRainha);
    moverRainha(passosRainha);

  // ------------------- CAVALO -------------------
    printf("\nMovimento do Cavalo: 2 casas para Cima e 1 para Direita (movimento em L)\n");

    int cima = 2;
    int direita = 1;

    // Loop complexo: aninhamento com múltiplas variáveis
    for (int i = 1; i <= cima; i++) {
        for (int j = 1; j <= direita; j++) {
            // Executa impressão apenas quando i == cima e j == direita
            // Isso garante que o cavalo se mova duas casas para cima e uma para direita
            if (i < cima) {
                printf("Cima\n");
            } else if (i == cima && j == 1) {
                printf("Cima\n");     // Último passo para cima
                printf("Direita\n"); // Movimento horizontal no fim
            }
        }
    }

    return 0;
}

