#include <stdio.h>

// Função para verificar se um número é primo
int ehPrimo(int num) {
    if (num <= 1) {
        return 0; // Não é primo
    }

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0; // Não é primo
        }
    }

    return 1; // É primo
}

int main() {
    int vetor[10];

    // Leitura dos valores do vetor
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &vetor[i]);
    }

    // Verifica e imprime os números primos e suas posições
    printf("\nElementos primos e suas posições no vetor:\n");
    for (int i = 0; i < 10; ++i) {
        if (ehPrimo(vetor[i])) {
            printf("Posição %d: %d\n", i, vetor[i]);
        }
    }

    return 0;
}
