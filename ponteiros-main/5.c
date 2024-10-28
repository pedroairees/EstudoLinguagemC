#include <stdio.h>

// Função para encontrar o maior e o menor valor
void encontrarMaiorMenor(int *a, int *b) {
    if (*a < *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    // Se os valores já estiverem ordenados corretamente, não é necessário trocar.
}

int main() {
    // Declare duas variáveis inteiras
    int valorA, valorB;

    // Leia os valores do teclado
    printf("Digite o valor de A: ");
    scanf("%d", &valorA);

    printf("Digite o valor de B: ");
    scanf("%d", &valorB);

    // Chame a função para encontrar o maior e o menor valor
    encontrarMaiorMenor(&valorA, &valorB);

    // Exiba os valores após a modificação
    printf("\nMaior valor em A: %d\n", valorA);
    printf("Menor valor em B: %d\n", valorB);

    return 0;
}
