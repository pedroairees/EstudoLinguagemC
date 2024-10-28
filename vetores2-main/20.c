#include <stdio.h>

int main() {
    int vetor1[10];
    int vetor2[10];
    int count_impares = 0;

    // Leitura e preenchimento do primeiro vetor
    printf("Digite 10 números inteiros no intervalo [0, 50]:\n");
    for (int i = 0; i < 10; ++i) {
        do {
            scanf("%d", &vetor1[i]);
            // Verifica se o número está no intervalo [0,50]
            if (vetor1[i] < 0 || vetor1[i] > 50) {
                printf("Por favor, digite um número no intervalo [0,50]: ");
            }
        } while (vetor1[i] < 0 || vetor1[i] > 50);
    }

    // Preenchimento do segundo vetor com números ímpares do primeiro vetor
    for (int i = 0; i < 10; ++i) {
        if (vetor1[i] % 2 != 0) {
            vetor2[count_impares] = vetor1[i];
            count_impares++;
        }
    }

    // Impressão dos dois vetores, 2 elementos por linha
    printf("\nVetor 1:\n");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", vetor1[i]);
        if ((i + 1) % 2 == 0) {
            printf("\n");
        }
    }

    printf("\n\nVetor 2 (apenas ímpares do Vetor 1):\n");
    for (int i = 0; i < count_impares; ++i) {
        printf("%d ", vetor2[i]);
        if ((i + 1) % 2 == 0) {
            printf("\n");
        }
    }

    return 0;
}
