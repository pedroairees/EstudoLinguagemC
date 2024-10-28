#include <stdio.h>

int main() {
    int vetor[10];
    
    // Lê os valores do vetor
    printf("Digite 10 valores inteiros:\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &vetor[i]);
    }

    // Verifica e escreve os valores iguais
    printf("Valores iguais no vetor:\n");
    for (int i = 0; i < 10; ++i) {
        for (int j = i + 1; j < 10; ++j) {
            if (vetor[i] == vetor[j]) {
                printf("%d\n", vetor[i]);
            }
        }
    }

    return 0;
}
