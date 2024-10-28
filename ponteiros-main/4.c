#include <stdio.h>

// Função para trocar os valores de duas variáveis
void trocarValores(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // Declare duas variáveis inteiras
    int valorA, valorB;

    // Leia os valores do teclado
    printf("Digite o valor de A: ");
    scanf("%d", &valorA);

    printf("Digite o valor de B: ");
    scanf("%d", &valorB);

    // Exiba os valores iniciais
    printf("\nValores iniciais:\n");
    printf("A: %d\n", valorA);
    printf("B: %d\n", valorB);

    // Chame a função para trocar os valores
    trocarValores(&valorA, &valorB);

    // Exiba os valores após a troca
    printf("\nValores após a troca:\n");
    printf("A: %d\n", valorA);
    printf("B: %d\n", valorB);

    return 0;
}
