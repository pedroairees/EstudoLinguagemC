#include <stdio.h>

int main() {
    int vetor[10];

    // Lê os valores do vetor
    printf("Digite 10 valores inteiros:\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &vetor[i]);
    }

    // Atribui valor 0 aos elementos negativos
    for (int i = 0; i < 10; ++i) {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }

    // Imprime o vetor modificado
    printf("Vetor modificado:\n");
    for (int i = 0; i < 10; ++i) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}
