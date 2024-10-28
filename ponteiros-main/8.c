#include <stdio.h>

int main() {
    // Declare um array de float com 10 elementos
    float array[10];

    // Imprima o endereço de cada posição do array
    printf("Enderecos das posicoes do array:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Posicao %d: %p\n", i, (void *)&array[i]);
    }

    return 0;
}
