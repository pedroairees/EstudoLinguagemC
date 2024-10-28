#include <stdio.h>

int main() {
    int vetor[100];
    int numero = 1;  // Começa com o primeiro número natural

    // Preenche o vetor com os 100 primeiros números que atendem às condições
    for (int i = 0; i < 100; ) {
        if (numero % 7 != 0 && numero % 10 != 7) {
            vetor[i] = numero;
            i++;
        }
        numero++;
    }

    // Imprime o vetor
    printf("Os 100 primeiros naturais que não são múltiplos de 7 ou terminam com 7:\n");
    for (int i = 0; i < 100; ++i) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
