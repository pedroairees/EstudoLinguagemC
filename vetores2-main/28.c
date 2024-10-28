#include <stdio.h>

int main() {
    int v[10];
    int v1[10]; // Pode ter no máximo 10 elementos
    int v2[10]; // Pode ter no máximo 10 elementos
    int count_v1 = 0; // Contador para elementos em v1
    int count_v2 = 0; // Contador para elementos em v2

    // Leitura dos valores do vetor v
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &v[i]);
    }

    // Separa os valores pares e ímpares em v1 e v2
    for (int i = 0; i < 10; ++i) {
        if (v[i] % 2 == 0) {
            // Valor par, copia para v2
            v2[count_v2] = v[i];
            count_v2++;
        } else {
            // Valor ímpar, copia para v1
            v1[count_v1] = v[i];
            count_v1++;
        }
    }

    // Imprime os elementos utilizados de v1
    printf("\nElementos utilizados de v1:\n");
    for (int i = 0; i < count_v1; ++i) {
        printf("%d ", v1[i]);
    }

    // Imprime os elementos utilizados de v2
    printf("\nElementos utilizados de v2:\n");
    for (int i = 0; i < count_v2; ++i) {
        printf("%d ", v2[i]);
    }

    return 0;
}
