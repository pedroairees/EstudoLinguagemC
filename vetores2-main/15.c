#include <stdio.h>

int main() {
    int vetor[20];

    // Lê os valores do vetor
    printf("Digite 20 valores inteiros:\n");
    for (int i = 0; i < 20; ++i) {
        scanf("%d", &vetor[i]);
    }

    // Elimina elementos repetidos
    for (int i = 0; i < 20; ++i) {
        for (int j = i + 1; j < 20; ++j) {
            if (vetor[i] == vetor[j]) {
                // Se um elemento repetido é encontrado, substitui por -1
                vetor[j] = -1;
            }
        }
    }

    // Escreve os elementos não repetidos
    printf("Elementos do vetor sem repetição:\n");
    for (int i = 0; i < 20; ++i) {
        if (vetor[i] != -1) {
            printf("%d\n", vetor[i]);
        }
    }

    return 0;
}
