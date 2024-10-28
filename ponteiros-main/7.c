#include <stdio.h>

// Função para calcular a soma de dois números e armazenar o resultado em A
void calcularSoma(int *a, int *b) {
    *a = *a + *b;
}

int main() {
    // Declare duas variáveis inteiras
    int valorA, valorB;

    // Leia os valores do teclado
    printf("Digite o valor de A: ");
    scanf("%d", &valorA);

    printf("Digite o valor de B: ");
    scanf("%d", &valorB);

    // Exiba os valores iniciais de A e B
    printf("\nValores iniciais:\n");
    printf("A: %d\n", valorA);
    printf("B: %d\n", valorB);

    // Chame a função para calcular a soma e modificar o valor de A
    calcularSoma(&valorA, &valorB);

    // Exiba os valores após a chamada da função
    printf("\nValores após a chamada da função:\n");
    printf("A: %d\n", valorA);
    printf("B: %d\n", valorB);

    return 0;
}
