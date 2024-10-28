#include <stdio.h>

// Função para calcular a soma do dobro dos valores e atualizar as variáveis originais
int somaDobro(int *a, int *b) {
    int resultado = (*a * 2) + (*b * 2);
    *a = *a * 2;  // Armazena o dobro de A em A
    *b = *b * 2;  // Armazena o dobro de B em B
    return resultado;
}

int main() {
    // Declare duas variáveis inteiras
    int valorA, valorB;

    // Leia os valores do teclado
    printf("Digite o valor de A: ");
    scanf("%d", &valorA);

    printf("Digite o valor de B: ");
    scanf("%d", &valorB);

    // Chame a função para calcular a soma do dobro dos valores e atualizar as variáveis
    int resultado = somaDobro(&valorA, &valorB);

    // Exiba os valores e o resultado
    printf("\nValores atualizados:\n");
    printf("Novo valor de A: %d\n", valorA);
    printf("Novo valor de B: %d\n", valorB);
    printf("Soma do dobro de A e B: %d\n", resultado);

    return 0;
}
