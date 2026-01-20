#include <stdio.h>

    int main() {
    const int MOVIMENTOS_TORRE = 5;
    const int MOVIMENTOS_BISPO = 5;
    const int MOVIMENTOS_RAINHA = 8;

    
    printf("--- Movimento da Torre ---\n");
    for (int i = 0; i < MOVIMENTOS_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n"); 

   
    printf("--- Movimento do Bispo ---\n");
    int contador_bispo = 0;
    while (contador_bispo < MOVIMENTOS_BISPO) {
      
        printf("Cima, Direita\n"); 
        contador_bispo++;
    }
    printf("\n");

    
    printf("--- Movimento da Rainha ---\n");
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < MOVIMENTOS_RAINHA);

    return 0;
}
