#include <stdio.h>

int main() {
    int vetor[10];
    int numero;

    // Lê os valores do vetor
    printf("Digite 10 valores inteiros:\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &vetor[i]);
    }

    // Lê o número para encontrar os múltiplos
    printf("Digite um número inteiro para contar seus múltiplos: ");
    scanf("%d", &numero);

    // Conta e mostra os múltiplos do número no vetor
    printf("Múltiplos de %d no vetor:\n", numero);
    for (int i = 0; i < 10; ++i) {
        if (vetor[i] % numero == 0) {
            printf("%d\n", vetor[i]);
        }
    }

    return 0;
}
