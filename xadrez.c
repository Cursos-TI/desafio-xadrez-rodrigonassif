#include <stdio.h>

int main() {
    // Mover a Torre 5 casas para a direita
    printf("Faça o movimento da Torre para 5 casas à direita\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n"); // Imprime a direção do movimento
    }

    // Mover o Bispo 5 casas na Diagonal Superior Direita
    printf("Faça a movimentaçaõ do Bispo em 5 casas na Diagonal Superior Direita\n");

    char mov1[50] = "Cima";
    char mov2[50] = "Direita";
    int b = 0;

    while (b <= 5) { // Condição
        printf("%s,%s\n", mov1, mov2); // Saída
        b++; // Incremento
    }

    // Mover a Rainha 5 casas para a esquerda
    printf("Agora movimente a Rainha para a direção Esquerda por 5 vezes seguidas\n");

    int r = 1; // Variável de incremento
    do {
        printf("Esquerda\n"); // Saída
        r++; // Incremento
    } while (r <= 5); // Condição

    // Espaço visual entre movimentos anteriores e do Cavalo
    printf("\n");

    // ---------------- MOVIMENTO DO CAVALO ----------------

    // Movimento do Cavalo: duas casas para baixo e uma para a esquerda
    printf("Movimento do Cavalo: 2 casas para Baixo e 1 casa para Esquerda\n");

    int passos_baixo = 2;      // Número de casas para baixo
   

    // Loop externo (obrigatoriamente um 'for') para o movimento para baixo
    for (int i = 0; i < passos_baixo; i++) {
        printf("Baixo\n"); // Cada passo para baixo

        // Loop interno (while) apenas para fins de exemplo de loop aninhado
        int j = 0;
        while (j < 1 && i == passos_baixo - 1) { // Executa ao final do movimento para baixo
            printf("Esquerda\n"); // Movimento perpendicular após os dois passos
            j++;
        }
    }

    // ------------------------------------------------------

    return 0;
}
