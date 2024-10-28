#include <stdio.h>
#include <math.h>

int main() {
    int vetor[10];
    double media = 0.0;
    double somaQuadradosDiferencas = 0.0;

    // Leitura dos valores do vetor
    printf("Digite 10 números:\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &vetor[i]);
        media += vetor[i];
    }

    // Calcula a média
    media /= 10.0;

    // Calcula a soma dos quadrados das diferenças
    for (int i = 0; i < 10; ++i) {
        somaQuadradosDiferencas += pow(vetor[i] - media, 2);
    }

    // Calcula o desvio padrão
    double desvioPadrao = sqrt(somaQuadradosDiferencas / 10.0);

    // Imprime a média e o desvio padrão
    printf("\nMédia: %.2f\n", media);
    printf("Desvio Padrão: %.2f\n", desvioPadrao);

    return 0;
}
