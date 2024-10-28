#include <stdio.h>

int main() {
    // Definindo os vetores
    float vetorX[5];
    float vetorY[5];

    // Lendo os valores para o primeiro vetor
    printf("Digite 5 valores para o primeiro conjunto (vetor X):\n");
    for (int i = 0; i < 5; ++i) {
        scanf("%f", &vetorX[i]);
    }

    // Lendo os valores para o segundo vetor
    printf("Digite 5 valores para o segundo conjunto (vetor Y):\n");
    for (int i = 0; i < 5; ++i) {
        scanf("%f", &vetorY[i]);
    }

    // Calculando o produto escalar
    float produtoEscalar = 0.0;
    for (int i = 0; i < 5; ++i) {
        produtoEscalar += vetorX[i] * vetorY[i];
    }

    // Imprimindo os conjuntos e o produto escalar
    printf("\nConjunto X:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%f ", vetorX[i]);
    }

    printf("\nConjunto Y:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%f ", vetorY[i]);
    }

    printf("\nProduto Escalar: %f\n", produtoEscalar);

    return 0;
}
