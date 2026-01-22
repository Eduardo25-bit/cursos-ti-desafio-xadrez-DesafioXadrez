#include <stdio.h>


#define MOV_TORRE 5
#define MOV_BISPO 5
#define MOV_RAINHA 8
#define CAVALO_MOV_CIMA 2
#define CAVALO_MOV_DIREITA 1


void moverTorre(int movimentos);
void moverRainha(int movimentos);
void moverBispo(int movimentos);

int main() {
    
    
    printf("--- Movimento da Torre (Recursivo) ---\n");
    moverTorre(MOV_TORRE); // Chama a função recursiva
    printf("\n");

    
    printf("--- Movimento do Bispo (Recursivo + Loops Aninhados) ---\n");
    moverBispo(MOV_BISPO);
    printf("\n");

    
    printf("--- Movimento da Rainha (Recursivo) ---\n");
    moverRainha(MOV_RAINHA);
    printf("\n");

   
    printf("--- Movimento do Cavalo (Loops Complexos) ---\n");

    
    for (int i = 0, j = 0; i < CAVALO_MOV_CIMA; i++, j++) {
        
        printf("Cima\n");

        
        if (j < (CAVALO_MOV_CIMA - 1)) {
            continue; 
        }

       
        int k = 0;
        while (k < CAVALO_MOV_DIREITA) {
            printf("Direita\n");
            k++;
            
            
            if (k >= CAVALO_MOV_DIREITA) {
                break; 
            }
        }
    }

    return 0;
}

// --- IMPLEMENTAÇÃO DAS FUNÇÕES RECURSIVAS ---

/*
 * Função: moverTorre
 * Lógica: Recebe o número de movimentos restantes.
 * Se ainda houver movimentos (> 0), imprime a direção e chama a si mesma
 * subtraindo 1 do contador. Isso cria um loop sem usar 'for' ou 'while'.
 */
void moverTorre(int movimentos) {
    if (movimentos > 0) {
        printf("Direita\n");
        moverTorre(movimentos - 1); // Chamada recursiva
    }
    // Caso base (movimentos == 0): A função termina automaticamente.
}

/*
 * Função: moverRainha
 * Lógica: Similar à Torre, mas para a direção Esquerda.
 */
void moverRainha(int movimentos) {
    if (movimentos > 0) {
        printf("Esquerda\n");
        moverRainha(movimentos - 1); // Chamada recursiva
    }
}

/*
 * Função: moverBispo
 * Lógica: Combina recursividade (para o total de casas) com Loops Aninhados (para a lógica do movimento).
 * Requisito Mestre: Loop externo (Vertical) e interno (Horizontal).
 */
void moverBispo(int movimentos) {
    if (movimentos > 0) {
        // Loop Externo: Simula o componente Vertical do movimento diagonal
        for (int v = 0; v < 1; v++) {
            
            // Loop Interno: Simula o componente Horizontal do movimento diagonal
            for (int h = 0; h < 1; h++) {
                // Ao combinar 1 passo vertical e 1 horizontal, temos a diagonal
                printf("Cima, Direita\n");
            }
        }
        
        moverBispo(movimentos - 1); // Chamada recursiva para o próximo passo
    }
}