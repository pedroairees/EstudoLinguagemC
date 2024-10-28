#include <stdio.h>

int main() {
    // Declare uma matriz de inteiros 3x3
    int matriz[3][3];

    // Imprima o endereço de cada posição da matriz
    printf("Enderecos das posicoes da matriz:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("Matriz[%d][%d]: %p\n", i, j, (void *)&matriz[i][j]);
        }
    }

    return 0;
}
