#include <stdio.h>

    int main() {
    const int MOVIMENTOS_TORRE = 5;
    const int MOVIMENTOS_BISPO = 5;
    const int MOVIMENTOS_RAINHA = 8;
    const int CAVALO_MOV_BAIXO = 2; // 
    const int CAVALO_MOV_ESQUERDA = 1; 

    
   // --- MOVIMENTO DA TORRE ---
    // Requisito: for
    printf("--- Movimento da Torre ---\n");
    for (int i = 0; i < MOVIMENTOS_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n"); // Pula linha para organização

    // --- MOVIMENTO DO BISPO ---
    // Requisito: while
    printf("--- Movimento do Bispo ---\n");
    int contador_bispo = 0;
    while (contador_bispo < MOVIMENTOS_BISPO) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }
    printf("\n");

    // --- MOVIMENTO DA RAINHA ---
    // Requisito: do-while
    printf("--- Movimento da Rainha ---\n");
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < MOVIMENTOS_RAINHA);
    printf("\n");

    // --- MOVIMENTO DO CAVALO (NOVO - NÍVEL INTERMEDIÁRIO) ---
    // Requisito: Loops aninhados (for e while) para simular o 'L'.
    // Lógica: O Cavalo faz um movimento composto: primeiro vertical, depois horizontal.
    
    printf("--- Movimento do Cavalo ---\n");

    // Loop Externo (FOR): Gerencia as "fases" do movimento do Cavalo.
    // i = 0: Fase Vertical (Baixo)
    // i = 1: Fase Horizontal (Esquerda)
    // Usamos um loop complexo aqui para simular a decisão de "troca de direção".
    for (int i = 0; i < 2; i++) {
        
        int j = 0; // Contador para o loop interno

        // Se estivermos na primeira iteração (i=0), fazemos o movimento vertical
        if (i == 0) {
            // Loop Interno (WHILE): Controla as casas percorridas na vertical
            while (j < CAVALO_MOV_BAIXO) {
                printf("Baixo\n");
                j++;
            }
        } 
        // Se estivermos na segunda iteração (i=1), fazemos o movimento horizontal
        else {
            // Loop Interno (WHILE): Controla as casas percorridas na horizontal
            while (j < CAVALO_MOV_ESQUERDA) {
                printf("Esquerda\n");
                j++;
            }
        }
    }
    
    return 0;
}
