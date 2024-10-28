#include <stdio.h>

int main() {
    int vetor[50];

    // Preenche o vetor com os valores dados pela expressão
    for (int i = 0; i < 50; ++i) {
        vetor[i] = (i + 51) % (i + 1);
    }

    // Imprime o vetor na tela
    printf("Vetor preenchido:\n");
    for (int i = 0; i < 50; ++i) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
