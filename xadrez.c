#include <stdio.h>

int main () {

    printf("Bem Vindo ao Xadrez em C!\n");

// Mover a Torre 5 casas para direita

printf("Faça o movimento da Torre para 5 casas à direita\n");
for (int i = 0; i < 5; i++) {
    printf("Direita\n"); // Imprime a direção do movimento

}

printf("Faça a movimentaçaõ do Bispo em 5 casas na Diagonal Superior Direita\n");

char mov1[50] = "Cima";
char mov2[50] = "Direita";
int b = 0;

while (b <= 5) { //Condição
        printf("%s,%s\n", mov1, mov2); //Saída
        b++; // Incremento
    }
    printf("Agora movimente a Rainha para a direção Esquerda por 5 vezes seguidas\n");
int r = 1; //Variável de incremento
   
    do { //Entrada (1x pelo menos) 
        printf("Esquerda\n", r); //Saída
        r++; //Incremento
    } while (r <= 5); //Condição

return 0;

}
