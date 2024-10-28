#include <stdio.h>

int main() {
    int vetor1[10];
    int vetor2[10];
    int vetor3[20];

    // Leitura dos valores do primeiro vetor
    printf("Digite 10 valores para o primeiro vetor:\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &vetor1[i]);
    }

    // Leitura dos valores do segundo vetor
    printf("Digite 10 valores para o segundo vetor:\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &vetor2[i]);
    }

    // Preenchimento do terceiro vetor com valores dos dois primeiros
    for (int i = 0; i < 10; ++i) {
        vetor3[2 * i] = vetor1[i];      // Posições pares com valores do primeiro vetor
        vetor3[2 * i + 1] = vetor2[i];  // Posições ímpares com valores do segundo vetor
    }

    // Impressão do terceiro vetor
    printf("\nTerceiro vetor (posições pares com valores do primeiro, ímpares com valores do segundo):\n");
    for (int i = 0; i < 20; ++i) {
        printf("%d ", vetor3[i]);
    }
    printf("\n");

    return 0;
}
